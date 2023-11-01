#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates the string
 * @str: Function parameter
 * Return: Always 0
 */


char *_strdup(char *str)
{
	int x = 0;
	int i = 1;
	char *y;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	y = malloc((sizeof(char) * i) + 1);
	if (y == NULL)
		return (NULL);
	while (x < i)
	{
		y[x] = str[x];
		x++;
	}
	y[x] = '\0';
	return (y);
}
