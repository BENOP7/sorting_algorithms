#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: pointer to the array
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{

	size_t i, j, Min;

	for (i = 0; i <= size; i++)
	{
		Min = i; /*consider the first element as the minimum*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[Min])
				Min = j;
		}
		if (Min != i)
		{
			swap(array, i, Min);
			print_array(array, size);
		}
	}
}

/**
 * swap - swap variable values
 * @array: array to use
 * @a: index 1
 * @b: index 2
*/
void swap(int *array, size_t a, size_t b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
