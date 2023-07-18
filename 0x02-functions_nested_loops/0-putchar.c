#include <stdio.h>
#include "main.h"
/**
 * _putchar - Custom function to output a character to stdout.
 * @c: The character to be printed.
 * Return: The character that was printed.
 */
int _putchar(char c);
int main(void)
{
	char c[] = "_putchar";
		int a;

		for (a = 0; a < 8; a++)
		_putchar(c[a]);

		_putchar('\n');
		return (0);
}
