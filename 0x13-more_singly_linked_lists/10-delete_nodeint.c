#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *now = NULL;
	unsigned int f = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (f < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		f++;
	}
	now = node->next;
	node->next = now->next;
	free(now);

	return (1);
}
