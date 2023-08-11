#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: Old size of the memory block.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the reallocated memory block.
 *         If new_size == old_size, return ptr.
 *         If new_size is 0 and ptr is not NULL, return NULL and free(ptr).
 *         If malloc fails, return NULL and free(ptr).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		new_size = old_size;

	for (unsigned int i = 0; i < new_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return (new_ptr);
}
