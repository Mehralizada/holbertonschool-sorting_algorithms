#include "sort.h"

/**
* selection_sort - function that sorts array of integers in
* ascending order using the selection sort algorithm
* @array: array of integers to be sorted
* @size: size of array
*
*/

void selection_sort(int *array, size_t size)
{
	size_t temp, step, min, i;

	if (array == NULL)
		return;

	for (step = 0; step < size - 1; step++)
	{
		min = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min])
				min = i;
		}

		temp = array[step];
		array[step] = array[min];
		array[min] = temp;

	if (step != min)
		print_array(array, size);
	}
}
