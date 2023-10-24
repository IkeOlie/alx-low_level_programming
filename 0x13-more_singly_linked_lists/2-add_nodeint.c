#include "lists.h"
/**
* add_nodeint - Adds a node at the beggining of a list.
* @head: Pointer to the current first element of the list.
* @n: Number to initialize the new element.
* Return: Pointer to the new first element or 0 if it fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		n_node->next = *head;
		*head = n_node;
	}
	return (n_node);
}
