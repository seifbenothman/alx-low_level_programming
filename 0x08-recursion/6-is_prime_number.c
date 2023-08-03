#include <stdbool.h>

/**
 * is_prime_helper -check if a number is prime.
 * @n: The input integer to be checked.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_helper(n, divisor + 1));
}
/**
 * is_prime_number - Checks if the integer is a prime number using recursion.
 * @n: The input integer to be checked.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}
