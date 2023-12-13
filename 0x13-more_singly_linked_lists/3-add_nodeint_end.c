#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head of the linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if memory allocation fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *nextnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		printf("Memory allocation failed!\n");
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		nextnode = *head;
		while (nextnode->next != NULL)
		{
			nextnode = nextnode->next;
		}
		nextnode->next = newnode;
	}
	return (newnode);
}
