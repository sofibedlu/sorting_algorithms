#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: the array to be sorted
 * @size: the size of the @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, s_i, swap = 0;

	for (i = 0; i < size; i++)
	{
		s_i = i;
		swap = 0;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[s_i])
			{
				s_i = j;
				swap = 1;
			}
		}
		if (swap == 1)
		{
			temp = array[i];
			array[i] = array[s_i];
			array[s_i] = temp;
			print_array(array, size);
		}
	}
}
