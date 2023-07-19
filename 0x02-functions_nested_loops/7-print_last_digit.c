#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last *= -1;
	_putchar (last + '0');
	return (last);
}
