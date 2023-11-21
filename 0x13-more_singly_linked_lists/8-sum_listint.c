#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer to the head
 * Return: sum of all data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *now = head;

	while (now)
	{
		sum += now->n;
		now = now->next;
	}
	return (sum);
}
