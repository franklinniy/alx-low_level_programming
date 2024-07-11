#include "main.h"

/**
 * _sqrt_helper - Helper function to find the natural square root of a number.
 * @n: The number whose square root is to be found.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be found.
 *
 * Return: The natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
