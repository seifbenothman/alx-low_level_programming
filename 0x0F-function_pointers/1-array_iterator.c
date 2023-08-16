#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of elements
 * @size: The size of the array
 * @action: The function to be executed on each element
 *
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
