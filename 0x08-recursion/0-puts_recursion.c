#include "main.h"

/**
 *_my_puts_recursion - prints a string recursively
 *@s: input string
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
