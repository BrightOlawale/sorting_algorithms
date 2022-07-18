#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - Algorithm using bubble sort
 *
 * @array: array to be sorted
 * @size: lenght of the element in array
 *
 * Return: Nothing (void)
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j, temp;
	bool swapped = false;

	do {
		swapped = false;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		i++;
	} while (swapped);
}
