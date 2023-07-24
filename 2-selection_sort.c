#include "sort.h"

/**
  * selection_sort - sorts the array of integers in the ascending order.
  * @array: array of the integers.
  * @size: size of array
  *
  */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array((const int *)array, size);
		}
	}
}
