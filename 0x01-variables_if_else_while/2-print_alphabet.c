#include <stdio.h>
/**
 * main - is the entry point of the program.
 *
 * Description: for statements
 *
 * Return: the result is always 0 to show success
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
