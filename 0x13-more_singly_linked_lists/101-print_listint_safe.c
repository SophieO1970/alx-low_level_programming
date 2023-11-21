#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - it counts the number of unique nodes
 * @head: a pointer
 * Return: the list that is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *shirt, *skirt;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	shirt = head->next;
	skirt = (head->next)->next;

	while (skirt)
	{
		if (shirt == skirt)
		{
			shirt = head;
			while (shirt != skirt)
			{
				nodes++;
				shirt = shirt->next;
				skirt = skirt->next;
			}
			shirt = shirt->next;

			while (shirt != skirt)
			{
				nodes++;
				shirt = shirt->next;
			}
			return (nodes);
		}
		shirt = shirt->next;
		skirt = (skirt->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function that prints a listint_t linked list
 * This function can print lists with a loop
 * You should go through the list only once
 * @head: a pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, nim = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (nim = 0; nim < nodes; nim++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
