#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, or if malloc fails, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Zero out the allocated memory using memset */
	memset(ptr, 0, total_size);

	return (ptr);
}
