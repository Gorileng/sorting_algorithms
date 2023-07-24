#include "sort.h"

/**
  * bubble_sort - sorts the array of integers in the ascending order.
  * @array: array sorted
  * @size: size of array
  *
  */
void bubble_sort(int *array, size_t size)
{
	int temp;
	unsigned int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array((const int *)array, size);
			}
		}
	}
}
