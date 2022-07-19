#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of numbers in ascending order
 * @array: The array of numbers
 * @size: length of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int swap = 0;
	size_t i, n = size;
	int tmp;

	do {
		swap = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				swap = i;
				print_array(array, size);
			}
		}
		n -= 1;
	} while (swap);
}

