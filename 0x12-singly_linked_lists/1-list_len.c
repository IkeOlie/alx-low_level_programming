#include "lists.h"
/**
 * list_len - lenght of list
 * @h: pointer to the first node
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	int q;

	if (h == NULL)
	return (0);

	for (q = 1; h->next != NULL; q++)
		h = h->next;
	return (q);
}
