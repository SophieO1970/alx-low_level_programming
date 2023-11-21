#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: double pointer to the head
 * Return: data of the head node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *now;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	now = *head;
	n = now->n;
	*head = now->next;

	free(now);

	return (n);
}
