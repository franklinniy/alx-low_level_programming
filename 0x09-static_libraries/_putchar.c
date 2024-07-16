#include "main.h"
#include <unistd.h>
/**
 * main - is the entry point of the program.
 *
 * Description: if statements
 *
 * Return: the result is always 0 to show success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

