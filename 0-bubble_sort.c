#include"sort.h"

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
					swap(array, (int) j, (int) (j + 1));
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
