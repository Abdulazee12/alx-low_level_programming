#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * This program checks if the value is stored in the variable
 * 'n' is positive or negative
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%p is negative\n", n);
	else if (n > 0)
		printf("%p is positive\n", n);
	else
		printf("%p is zero\n", n);
	return (0);
}
