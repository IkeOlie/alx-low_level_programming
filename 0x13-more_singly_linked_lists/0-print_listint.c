#include "lists.h"
/**
  * print_listint - prints elements of a listint_t
  * @h: List to print.
  * Return: Number of nodes.
  */

size_t print_listint(const listint_t *h)
{
	int q = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		q++;
	}
	return (q);
}
