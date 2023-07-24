#include"sort.h"

/**
 * quick_sort - sorts an array in assending order
 * @array: elements to be sorted
 * @size: number of items in the @array
 */
void quick_sort(int *array, size_t size)
{
	int low, high;

	if (size > 1 && array != NULL)
	{
		low = size - size;
		high = size - 1;
		sort(array, low, high, size);
	}
}

/**
 * sort - does the sorting logic
 * @array: number of elements
 * @low: first element in @array
 * @high: last element in @array
 * @size: size of array
 */
void sort(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		sort(array, low, pivot_index - 1, size);
		sort(array, pivot_index + 1, high, size);
	}
}

/**
 * partition - does the partition logic
 * @array: number of elements
 * @low: first element in @array
 * @high: last element in @array
 * @size: size or array
 * Return: int
 */
int partition(int *array, int low, int high, size_t size)
{
	int i = 0, j = 0, pivot = 0;

	pivot = array[high];
	i = low;

	for (j = low; j < high; ++j)
	{
		if (array[j] < pivot)
		{
			swap(array, i, j);
			if (aux != array[i])
				print_array(array, size);
			++i;
		}
	}
	swap(array, i, high);
	if (aux != array[i])
		print_array(array, size);

	return (i);
}
