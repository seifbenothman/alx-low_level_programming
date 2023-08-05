#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied.
 * Return: Pointer to the resulting string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
