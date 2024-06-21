#include <stdio.h>
/**
 * main - is the entry point of the program.
 *
 * Description: Hexadecimal
 *
 * Return: the result is always 0 to show success
*/
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
