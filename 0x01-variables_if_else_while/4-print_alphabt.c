#include <stdio.h>
/**
 * main - is the entry point of the program.
 *
 * Description: if statements
 *
 * Return: the result is always 0 to show success
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
