#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer of the first node.
 * @n: Value to be added to the new node.
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		printf("Memory allocation failed!");
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}



