#include <stdio.h>

/**
 * main - This program prints every letter of the alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		putchar (a);
	putchar('\n');
	return (0);
}
