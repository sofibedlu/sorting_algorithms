#include "sort.h"

/**
 * bubble_sort - bubble sorting algorithm
 * @array: the array to be sorted
 * @size: the number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			break;
	}
}
