#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked list
 * @h: linked list of type listint_len to traverse
 * Return: total number of nodes counted
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
