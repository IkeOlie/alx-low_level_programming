#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int q_node;
	listint_t *h;
	listint_t *actual;

	if (*head == NULL)
		return (0);

	actual = *head;

	q_node = actual->n;

	h = actual->next;

	free(actual);

	*head = h;

	return (q_node);
}
