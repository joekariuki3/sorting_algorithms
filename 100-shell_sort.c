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
 * shell_sort - algorithim to sort array elements in acesnding order
 * @array: elements to be arranged
 * @size: number of elements in @arry
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, j = 0;
	int i = 0;

	if (array != NULL && size > 1)
	{
		/* get initial gap value */
		for (gap = 3 * gap + 1; gap >= 1; gap = gap / 3)
		{
			for (j = gap; j < size; j++)
			{
				for (i = j - gap; i >= 0; i = i - gap)
				{
					if (array[i + gap] > array[i])
						break;
					swap(array, (int) (i + gap), (int) i);
				}
			}
			print_array(array, size);
		}
	}
}
