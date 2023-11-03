#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table array.
 * @key: The key to be hashed.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
