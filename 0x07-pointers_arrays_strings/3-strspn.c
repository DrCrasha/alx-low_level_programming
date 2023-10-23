#include "main.h"

/**
 * _strspn - Function name
 * @s: Parameter 1
 * @accept: parameter 2
 * Return: Always 0
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int _strspn(char *s, char *accept);
	unsigned int x = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				i++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
