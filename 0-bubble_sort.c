#include"sort.h"

/**
 * bubble_sort - sorts an array in assending order
 * @array: intagers to be sorted
 * @size: number of integers in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp = 0, swap = 0;

	if (size > 1 && array != NULL)
	{
		for (i = 0; i < size - 1; i++)
		{
			swap = 0;
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					swap = 1;
					print_array(array, size);
				}
			}
			/* if no swap happened it is sored break*/
			if (swap == 0)
				break;
		}
	}
	return;

}
