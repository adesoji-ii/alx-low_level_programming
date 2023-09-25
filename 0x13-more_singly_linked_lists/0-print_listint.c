#include "lists.h"

/**
 * print_listint - a function to print all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: total number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
