#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *now;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		now = (*head)->next;
		free(*head);
		*head = now;
	}
	*head = NULL;
}
