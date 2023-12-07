#include "lists.h"

/**
 * add_node - a function that adds
 * a new node at the beginning of a line
 * @head: points to the first node
 * @str: the string
 * Return: the address of the new
 * element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	/* Set the new node's next pointer to the current head*/
	*head = new_node;
	/*Update the head to point to the new node*/

	return (new_node);

}
