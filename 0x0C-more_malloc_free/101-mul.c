#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int len1, len2, len_res, carry, i, j;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (len1 = 0; argv[1][len1]; len1++)
	{
		if (argv[1][len1] < '0' || argv[1][len1] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (len2 = 0; argv[2][len2]; len2++)
	{
		if (argv[2][len2] < '0' || argv[2][len2] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}

	len_res = len1 + len2;
	result = calloc(len_res, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (argv[1][i] - '0') * (argv[2][j] - '0');
			int sum = result[i + j + 1] + product + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] += carry;
	}

	for (i = 0; i < len_res; i++)
	{
		if (i == 0 && result[i] == 0)
			continue;
		_putchar(result[i] + '0');
	}
	_putchar('\n');

	free(result);
	return (0);
}
