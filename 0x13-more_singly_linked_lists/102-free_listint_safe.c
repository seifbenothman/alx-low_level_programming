#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes_count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current)
	{
		nodes_count++;
		if ((void *)current <= (void *)current->next)
		{
			*h = NULL;
			return (nodes_count);
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (nodes_count);
}
