#include "lists.h"

/**
 * free_list - releases a list
 * @head: head of linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *present_n;

	while ((present_n = head) != NULL)
	{
		head = head->next;
		free(present_n->str);
		free(present_n);
	}
}
