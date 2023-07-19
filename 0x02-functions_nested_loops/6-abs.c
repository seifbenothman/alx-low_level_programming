#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @r: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
