#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print the opcodes in hexadecimal format
 * @addr: Address of the memory block to print opcodes from
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(unsigned char *addr, int num_bytes)
{
	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", addr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 * Return: 0 on success, other values on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		fprintf(stderr, "Error\n");
		return (2);
	}
}
