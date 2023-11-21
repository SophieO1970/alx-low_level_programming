#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * This function can free lists with a loop
 * You should go though the list only once
 * The function sets the head to NULL
 * @h: pointer to the first node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int min;
	listint_t *node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		min = *h - (*h)->next;
		if (min > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
