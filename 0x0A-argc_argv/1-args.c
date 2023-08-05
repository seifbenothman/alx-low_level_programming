#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array containing the command-line arguments as strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
