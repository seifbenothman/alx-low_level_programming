#include "main.h"

/**
 * create_array - of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: Pointer to the newly created array, or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *a = (char *)malloc(size * sizeof(char));

	if (size == 0 || a == NULL)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}
