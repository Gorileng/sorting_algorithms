#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - A doubly linked list node
 *
 * @n: Integer that is stored in a node
 * @prev: Pointer to previous element of a list
 * @next: Pointer to next element of a list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap_ints(int *a, int *b);

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t *, listint_t *, listint_t **);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void lomuto_qsort(int *array, int lo, int hi, size_t size);
int partition(int *array, int lo, int hi, size_t size);

#endif /*SORT_H*/
