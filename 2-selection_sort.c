#include "sort.h"

/**
 * selection_sort - Sorts array of integers ascendingly using Selection sort.
 * @array: Array to be sorted.
 * @size: Size of the array.
 *
 * Return: Nothing.
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, tmp;

	for (i = 0; i < size; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
		}

		print_array(array, size);
	}
}
