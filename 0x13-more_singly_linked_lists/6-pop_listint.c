#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t linked list.
 * @head: A pointer to the pointer to the head node.
 *
 * Return: The data stored in the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}

