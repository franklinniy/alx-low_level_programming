#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*  more headers goes there */
/**
 * main - is the entry point of the program.
 *
 * Description: if statements
 *
 * Return: the result is always 0 to show success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
