#include "lists.h"

/**
 * print_list - Prints all elements of a list_t linked list.
 * @h: Pointer to the head of the linked list.
 * Return: The total number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		node_count++;
	}

	return (node_count);
}
