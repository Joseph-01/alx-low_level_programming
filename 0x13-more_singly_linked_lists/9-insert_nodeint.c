#include "lists.h"

/**
 * createnode - Creates a new node with the given data.
 * @n: The data for the new node.
 *
 * Return: A pointer to the newly created node, NULL on failure.
 */
listint_t *createnode(int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be inserted.
 * @n: The data for the new node.
 *
 * Return: A pointer to the newly inserted node, NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *newnode;
	listint_t *oldtemp;

	temp = *head;
	if (head == NULL)
		return (NULL);

	newnode = createnode(n);
	if (newnode == NULL)
		return (NULL);

	if (*head == NULL || idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	oldtemp = temp->next;
	temp->next = newnode;
	newnode->next = oldtemp;

	return (newnode);
}

