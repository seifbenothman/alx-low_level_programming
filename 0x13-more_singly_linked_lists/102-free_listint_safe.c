#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		if (current->next >= current)
		{
			printf("Freeing loop node: [%p] %d\n", (void *)current, current->n);
			break;
		}
		current = current->next;
		free(*h);
		*h = current;
	}

	*h = NULL;

	return (count);
}
