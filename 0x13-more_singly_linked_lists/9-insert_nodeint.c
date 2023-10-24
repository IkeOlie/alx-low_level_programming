#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
 * @head : head of the list pointer
 * @idx  : the list index where new node will be added
 *         (indices start with 0)
 * @n    : value of the new node to be added
 * Return: pointer to the n_node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *n_node, *tmp = *head;
unsigned int q_node;

n_node = malloc(sizeof(listint_t));

if (n_node == NULL)
return (NULL);

n_node->n = n;

if (idx == 0)
{
n_node->next = tmp;
*head = n_node;
return (n_node);
}

for (q_node = 0; q_node < (idx - 1); q_node++)
{
if (tmp == NULL || tmp->next == NULL)
return (NULL);

tmp = tmp->next;
}

n_node->next = tmp->next;
tmp->next = n_node;

return (n_node);
}
