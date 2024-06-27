#include <stdio.h>
/**
 * main - is the entry point of the program.
 *
 * Description: if statements
 *
 * Return: the result is always 0 to show success
*/
int _isupper(int c);
int main(void)
{
	char test_char1 = 'A';
	char test_char2 = 'a';

	if (_isupper(test_char1))
	{
		printf("%c: 1\n", test_char1);
	}
	else
	{
		printf("%c: 0\n", test_char1);
	}
	if (_isupper(test_char2))
	{
		printf("%c: 1\n", test_char2);
	}
	else
	{
		printf("%c: 0\n", test_char2);
	}
	return (0);
}

int _isupport(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
