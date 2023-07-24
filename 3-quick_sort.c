#include "sort.h"

/**
  * quick_sort - sorts the array of integers in the ascending order.
  * @array: array to sort.
  * @size: size of array.
  *
  *
  */
void quick_sort(int *array, size_t size)
{

	lomuto_qsort(array, 0, size - 1, size);
}

/**
  * lomuto_qsort - sorts the array of the integers
  * @array: array to sort.
  * @lo: first element in the array.
  * @hi: last element in the array.
  * @size: size of array.
  *
  */
void lomuto_qsort(int *array, int lo, int hi, size_t size)
{
	int p = 0;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		lomuto_qsort(array, lo, p - 1, size);
		lomuto_qsort(array, p + 1, hi, size);
	}
}

/**
  * partition - divides array into.
  * @array: array to partition.
  * @lo: first element of array.
  * @hi: last element in an array.
  * @size: size of array.
  *
  * Return: the index of array where a check should begin.
  */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo - 1, j, tmp;

	for (j = lo; j <= hi; j++)
	{
		if (array[j]  <= pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	return (i);
}
