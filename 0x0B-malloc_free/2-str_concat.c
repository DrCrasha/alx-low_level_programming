#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: Function parameter 1
 * @s2: Function parameter 2
 * Return: Always 0
 *
 */


char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	char *y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	y = malloc((sizeof(char) * l) + 1);
	if (y == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k <= i)
			y[k] = s1[k];
		if (k >= i)
		{
			y[k] = s2[j];
			j++;
		}
		k++;
	}
	y[k] = '\0';
	return (y);
}
