#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to the newly created array.
 *         If min > max or malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
