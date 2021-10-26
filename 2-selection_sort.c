#include "sort.h"
/**
 * selection_sort - Sorting algorithms
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx_min;
	int tmp, cont;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		idx_min = i;
		cont = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[idx_min] > array[j])
			{
				idx_min = j;
				cont++;
			}
		}

		tmp = array[i];
		array[i] = array[idx_min];
		array[idx_min] = tmp;

		if (cont != 0)
			print_array(array, size);
	}
}
