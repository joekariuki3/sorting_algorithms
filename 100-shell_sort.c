#include"sort.h"

/**
 * shell_sort - algorithim to sort array elements in acesnding order
 * @array: elements to be arranged
 * @size: number of elements in @arry
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, j = 0;
	int i = 0;

	if (array != NULL || size > 1 || i || j)
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
