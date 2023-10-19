#include "lists.h"
/**
 * add_node - adds a new node fron start
 * of a list_t list.
 * @head: head of linked list.
 * @str: string to be stored in the list.
 * Return: address of head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	size_t q;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);

	for (q = 0; str[q]; q++)
		;

	new_n->len = q;
	new_n->next = *head;
	*head = new_n;

	return (*head);
}
