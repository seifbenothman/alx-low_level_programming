#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints the 9 times table
 */

void times_table(void)
{
	int a, b, r;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			r = a * b;
			if (r < 10)
			{
				if (b == 0)
				{
					_putchar ((r % 10) + '0');
				}
				else
				{
					_putchar (' ');
					_putchar ((r % 10) + '0');
				}
			}
			else
			{
				_putchar ((r / 10) + '0');
				_putchar ((r % 10) + '0');
			}
			if (b == 9)
				break;
			_putchar (',');
			_putchar (' ');
		}
		_putchar ('\n');
	}
}
