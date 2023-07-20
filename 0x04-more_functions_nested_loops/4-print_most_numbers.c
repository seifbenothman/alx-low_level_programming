#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0123456789 excluding 2 and 4
 * owned by Bwave ICT
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
		{
			putchar(c + '0');
		}
	}
	putchar('\n');
}

