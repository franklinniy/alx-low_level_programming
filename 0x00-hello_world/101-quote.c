#include <unistd.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 1 (Error).
 *
 * This program prints a specific message to the standard error using 'write'
 * and returns 1 to indicate an error.
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
