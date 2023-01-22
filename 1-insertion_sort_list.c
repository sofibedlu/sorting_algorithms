#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - swap two values
 *
 * @val1: value 1 pointer
 * @val2: value 2 pointer
 * Return: nothing
 */

void swap(listint_t *val1, listint_t *val2)
{
	if (val2->next)
		val2->next->prev = val1;
	if (val1->prev)
		val1->prev->next = val2;
	val2->prev = val1->prev;
	val1->next = val2->next;
	val2->next = val1;
	val1->prev = val2;
}

/**
 * insertion_sort_list - sort the list with insertion sort algo
 *
 * @list: input list pointer
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *tmp;

	if (!list || !*list || !(*list)->next)
		return;
	ptr = (*list)->next;
	while (ptr)
	{
		tmp = ptr;
		while (tmp->prev)
		{
			if (tmp->prev->n > tmp->n)
			{
				swap(tmp->prev, tmp);
				if (!tmp->prev)
					*list = tmp;
				print_list(*list);
			}
			else
				tmp = tmp->prev;
		}
		ptr = ptr->next;
	}
}
