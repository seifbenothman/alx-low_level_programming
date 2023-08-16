#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified function
 * @name: The name to be printed
 * @f: Pointer to a function that prints the name
 *
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
