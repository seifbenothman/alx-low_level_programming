#include "main.h"

/**
 * *_strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be concatenated.
 * Return: Pointer to the resulting string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
