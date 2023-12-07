#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*struct list_s - a  program that singly linked lists
*Description: singly linked list node structure
*@str: string
*@next: points to the next node
*@len: length
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif
