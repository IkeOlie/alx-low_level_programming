#include "lists.h"

/**
 * add_node_end - adds a new node at the terminal
 * of a list_t list.
 * @head: head of linked list.
 * @str: string to be stored in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *present_n;
	size_t q;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);

	for (q = 0; str[q]; q++)
		;

	new_n->len = q;
	new_n->next = NULL;
	present_n = *head;

	if (present_n == NULL)
	{
		*head = new_n;
	}
	else
	{
		while (present_n->next != NULL)
			present_n = present_n->next;
		present_n->next = new_n;
	}

	return (*head);
}
