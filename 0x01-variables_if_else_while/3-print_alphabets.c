#include <stdio.h>

/**
 * main - This program prints every leter of the alphabet
 * Return: 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		putchar (a);
	for (a = 65; a < 91; a++)
		putchar(a);
	putchar ('\n');
	return (0);
}
