#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: pointer to the first node
 * @idx: index
 * @n: data to be stored in the new node
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int f;
	listint_t *new_node;
	listint_t *now = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (f = 0; now && f < idx; f++)
	{
		if (f == idx - 1)
		{
			new_node->next = now->next;
			now->next = new_node;
			return (new_node);
		}
		else
		{
			now = now->next;
		}
	}
	return (NULL);
}
