#include "lists.h"
/**
 * listint_len - returns num of elements in a linked lists
 * @h: linked list to traverse
 *
 * Return: num of q
 */
size_t listint_len(const listint_t *h)
{
	int q = 0;

	while (h != NULL)
	{
		h = h->next;
		q++;
	}
	return (q);
}
