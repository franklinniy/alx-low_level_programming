#include <stdio.h>
/**
 *print_alphabet - prints in lowercase followed by \n
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
