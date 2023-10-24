#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *actual;

	if (head != NULL)
	{
		actual = *head;
		while ((tmp = actual) != NULL)
		{
			actual = actual->next;
			free(tmp);
		}
		*head = NULL;
	}
}
