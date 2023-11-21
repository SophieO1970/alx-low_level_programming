#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node of a
 * listint_t linked list
 * @head: first node
 * @index: index of the node to return
 * Return: pointer to the node of the linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int f = 0;

	while (head && f < index)
	{
		head = head->next;
		f++;
	}
	if (f == index)
		return (head);
	return (NULL);
}
