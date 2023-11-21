#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * You can only declare a maximum of two variables in your function
 * @head: linked list
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *top = head;
	listint_t *down = head;

	if (!head)
		return (NULL);

	while (top && down && down->next)
	{
		down = down->next->next;
		top = top->next;
		if (down == top)
		{
			top = head;
			while (top != down)
			{
				top = top->next;
				down = down->next;
			}
			return (down);
		}
	}
	return (NULL);
}
