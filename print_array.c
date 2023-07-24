#include "sort.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

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
