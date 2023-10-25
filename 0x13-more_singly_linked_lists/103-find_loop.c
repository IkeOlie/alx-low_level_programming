#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *q;
	listint_t *prev;

	q = head;
	prev = head;
	while (head && q && q->next)
	{
		head = head->next;
		q = q->next->next;

		if (head == q)
		{
			head = prev;
			prev =  q;
			while (1)
			{
				q = prev;
				while (q->next != head && q->next != prev)
				{
					q = q->next;
				}
				if (q->next == head)
					break;

				head = head->next;
			}
			return (q->next);
		}
	}

	return (NULL);
}
