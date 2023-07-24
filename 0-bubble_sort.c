#include"sort.h"

/**
 * bubble_sort - sorts an array in assending order
 * @array: intagers to be sorted
 * @size: number of integers in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int swapv = 0;

	if (size > 1 && array != NULL)
	{
		for (i = 0; i < size - 1; i++)
		{
			swapv = 0;
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(array, j, j + 1);
					swapv = 1;
					print_array(array, size);
				}
			}
			/* if no swapv happened it is sored break*/
			if (swapv == 0)
				break;
		}
	}
	return;

}
