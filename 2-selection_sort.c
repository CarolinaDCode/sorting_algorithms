#include "sort.h"
/**
 * selection_sort - Sorting algorithms
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx_min;
	int tmp;

	for (i = 0; i < size; i++)
	{
		idx_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[idx_min] > array[j])
			{
				idx_min = j;
			}
		}

		tmp = array[i];
		array[i] = array[idx_min];
		array[idx_min] = tmp;
		print_array(array, size);
	}
}
