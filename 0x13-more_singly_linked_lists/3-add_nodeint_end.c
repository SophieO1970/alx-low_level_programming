#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node
 *  at the end of a listint_t list
 *  @head: pointer to pointer
 *  @n: value to insert in the new node
 *  Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t **end_ptr, *new_node;

	end_ptr = head;

	while (*end_ptr != NULL)
	{
		end_ptr = &(*end_ptr)->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	*end_ptr = new_node;

	return (new_node);}
