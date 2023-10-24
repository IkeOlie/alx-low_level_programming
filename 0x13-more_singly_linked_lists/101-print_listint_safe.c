#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_z = NULL;
	const listint_t *l_z = NULL;
	size_t counter = 0;
	size_t new_z;

	tmp_z = head;
	while (tmp_z)
	{
		printf("[%p] %d\n", (void *)tmp_z, tmp_z->n);
		counter++;
		tmp_z = tmp_z->next;
		l_z = head;
		new_z = 0;
		while (new_z < counter)
		{
			if (tmp_z == l_z)
			{
				printf("-> [%p] %d\n", (void *)tmp_z, tmp_z->n);
				return (counter);
			}
			l_z = l_z->next;
			new_z++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
