#include "main.h"
/**
 * print_numbers - prints digits from 0 to 9 followed by new line
 *
 * Description: prints digits from 0 to 9
 *
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
