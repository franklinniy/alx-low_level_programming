# include <stdio.h>
/**
 * main - is the entry point of the program.
 *
 * Description: if statements
 *
 * Return: the result is always 0 to show success
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
