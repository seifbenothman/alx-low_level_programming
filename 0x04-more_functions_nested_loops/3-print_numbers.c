#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0123456789
 * owned by Bwave ICT
 * Return: void
 */


void print_numbers(void);
{
	int c;


	for (c = 0; c < 10; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
