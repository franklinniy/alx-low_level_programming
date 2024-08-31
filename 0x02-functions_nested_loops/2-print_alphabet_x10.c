#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			_putchar(alphabet[j]);
		}
	}
}
