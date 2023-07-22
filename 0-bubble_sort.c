#include "sort.h"

/**
 * bubble_sort - Sorts int array ascendingly using Bubble sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
