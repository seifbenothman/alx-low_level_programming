#include <stdio.h>
#include "main.h"
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
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
