#include "lists.h"

/**
 * listint_len - a function that
 * returns a number of elements of
 * listint_t list.
 * @h: first node
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;

	}
	return (i);
}

