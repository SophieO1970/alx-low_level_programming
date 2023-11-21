#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * You are not allowed to use more than 1 loop
 * You are not allowed to use malloc, free or arrays
 * @head: pointer to pointer to first node
 * Return:  pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}
	*head = before;

	return (*head);
}
