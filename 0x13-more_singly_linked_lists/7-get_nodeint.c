#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: list head.
 * @index: node index
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q;

	for (q = 0; q < index && head != NULL; q++)
	{
		head = head->next;
	}

	return (head);
}
