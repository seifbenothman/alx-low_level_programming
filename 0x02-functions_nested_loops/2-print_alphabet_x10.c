#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet followed by a new line x10.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int i, a;

		for (i = 0 ; i < 10 ; i++)
{
		for (a = 'a' ; a <= 'z' ; a++)
		_putchar (a);
		_putchar ('\n');
											}
}
