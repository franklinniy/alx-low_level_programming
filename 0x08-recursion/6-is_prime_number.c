#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to be checked.
 * @i: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Returns 1
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
