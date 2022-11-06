#include "sort.h"
/**
 * selection_sort - sots an array usiong selection sort
 * @array: array to be sorted
 * @size: array size
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, t, min;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
			t = array[min];
			array[min] = array[i];
			array[i] = t;
			print_array(array, size);
		}
	}
}
