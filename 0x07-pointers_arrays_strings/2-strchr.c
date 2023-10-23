#include "main.h"

/**
 * _strchr - function name
 * @s: parameter 1
 * @c: parameter 2
 * Return: Always o
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
