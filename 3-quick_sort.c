#include"sort.h"

/**
 * quick_sort - sorts an array in assending order
 * @array: elements to be sorted
 * @size: number of items in the @array
 */
void quick_sort(int *array, size_t size)
{
	int lb, ub;

	if (size > 1 && array != NULL)
	{
		lb = size - size ;
		ub = size - 1;
		sort(array, lb, ub, size);
	}
}

/**
 * sort - does the sorting logic
 * @array: number of elements
 * @lb: first element in @array
 * @ub: last element in @array
 * @size: size of array
 */
void sort(int *array, int lb, int ub, size_t size)
{
	int loc;

	if (lb < ub)
	{
		loc = partition(array, lb, ub, size);
		sort(array, lb, loc - 1, size);
		sort(array, loc + 1, ub, size);
	}
}

/**
 * partition - does the partition logic
 * @array: number of elements
 * @lb: first element in @array
 * @ub: last element in @array
 * @size: size or array
 * Return: int
 */
int partition(int *array, int lb, int ub, size_t size)
{
	int pivot, start, end, temp;

	pivot = array[lb];
	start = lb;
	end = ub;

	while (start < end)
	{
		while (array[start] <= pivot)
		{
			start++;
		}
		while (array[end] > pivot)
		{
			end--;
		}
		if (start < end)
		{
			temp = array[start];
			array[start] = array[end];
			array[end] = temp;
			print_array(array, size);
		}
	}
	temp = array[lb];
	array[lb] = array[end];
	array[end] = temp;
	print_array(array, size);

	return (end);
}
