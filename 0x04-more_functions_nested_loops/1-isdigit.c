#include <stdio.h>
/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

int main(void)
{
	char i = '0';
	char j = 'a';

	printf("%c: %d\n, i, _isdigit(i)");
	printf("%c: %d\n, j, _isdigit(j)");
	return (0);
}
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
