#include "main.h"

/**
 * _strstr - Function name
 * @haystack: Parameter 1
 * @needle: Parameter 2
 * Return: Alway 0
 */


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *I = haystack;
		char *P = needle;

		while (*I == *P && *P != '\0')
		{
			I++;
			P++;
		}
		if (*P == '\0')
			return (haystack);
	}
	return (0);
}
