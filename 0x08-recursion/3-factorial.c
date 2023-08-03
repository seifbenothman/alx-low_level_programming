#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number for which the factorial is to be calculated.
 *
 * Return: The factorial of the given number. If n is negative, returns -1.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 1)
		return (1);
	return (n * factorial(n - 1));
}
