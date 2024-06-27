#include <stdio.h>
/**
 * main - is the entry point of the program.
 *
 * Description: if statements
 *
 * Return: the result is always 0 to show success
*/
int _isupport(int c)
{
	if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
