#include "sort.h"

/**
 * partition - Lomutu parttition scheme for quick sot algorithm
 * @a: Array to be sorted
 * @l: lowest index
 * @h: higheat index
 * Return: pivot
 */

int partition(int *a, int l, int h)
{
	int p, i, j, t;
	static int size, k;

	if (k == 0)
		size = h + 1, k++;
	p = a[h];
	i = l;
	for (j = l; j < h; j++)
	{
		if (a[j] <= p)
		{
			if (i != j)
			{
				t = a[i];
				a[i] = a[j];
				print_array(a, size);
			}
			i++;
		}
	}
	if (i != h)
	{
		t = a[i];
		a[i] = a[h];
		a[h] = t;
		print_array(a, size);
	}
	return (i);
}
/**
 * qs - Quick sort recurssive function
 * @a: array to be sorted
 * @l: lowest index
 * @h: highest index
 */

void qs(int *a, int l, int h)
{
	int p;

	if (l < h)
	{
		p = partition(a, l, h);
		qs(a, l, p - 1);
		qs(a, p + 1, h);
	}
}
/**
 * quick_sort - using quicksort algorithm to sort array
 * @array: Sorted array
 * @size: size of sorted array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	qs(array, 0, size - 1);
}
