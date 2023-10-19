#include "lists.h"

/**
 * print_list - Prints all the elements of a list.
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes
 */
size_t print_list(const list_t *h)
{
	int q;

	if (h == NULL)
		return (0);
	for (q = 1; h->next != NULL; q++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (q);
}
