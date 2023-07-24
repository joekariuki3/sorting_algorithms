#include"sort.h"

/**
 * swap - exchange location of two values
 * @arr: elements in the list
 * @i: first value index
 * @j: second value index
 */
void swap(int *arr, int i, int j)
{
	int temp;

	if (arr != NULL)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
/**
 * selection_sort - sorts an array in assending order
 * @array: pointer to the elements to be sorted
 * @size: number of items in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int min;

	if (array != NULL && size > 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			min = i;
			for (j = i + 1; j < size; j++)
			{
				/* find the minimum */
				if (array[j] < array[min])
					min = j;
			}
			/* do the swap */
			if (array[i] > array[min])
			{
				swap(array, (int) i, min);
				print_array(array, size);
			}
		}
	}
	else
		return;
}
