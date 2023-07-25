#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, n, len = strlen(str);

	n = (len - 1) / 2;
	if (n % 2 == 1)
	{
		for (i = n ; i < len ; i++)
			_putchar (str[i]);
	}
	else
	{
		for (i = n + 1 ; i < len ; i++)
			_putchar (str[i]);
	}
	_putchar('\n');
}
