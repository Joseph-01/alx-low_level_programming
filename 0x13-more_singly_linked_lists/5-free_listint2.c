#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Description: This function frees the memory allocated for each node
 *              in the linked list and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{

		temp = (*head)->next;

		free(*head);
		*head = temp;
	}
	*head = NULL;
}

