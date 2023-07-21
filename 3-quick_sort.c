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
	int pivot, i, j, temp;

	pivot = array[high];
	i = low - 1;
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, size);
	return (i + 1);
}
