#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Description: This function frees the memory allocated for each node
 *              in the linked list and sets the head to NULL.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{

		temp = head->next;

		free(head);
		head = temp;
	}
}

