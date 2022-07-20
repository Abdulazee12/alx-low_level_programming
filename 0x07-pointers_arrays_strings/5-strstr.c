#include "main.h"

/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 */

char *strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		if (*haystyack++ != *needle++)
		{
			break;
		}
	}
	if (!*needle)
	{
		return (result);
	}
	needle = fneedle;
	result++;
	haystack = result;
}
