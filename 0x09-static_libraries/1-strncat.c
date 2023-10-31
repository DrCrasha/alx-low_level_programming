#include "main.h"
#include <string.h>
/**
 * _strncat - name of my function
 * @dest: my first parameter
 * @src: my second parameter
 * @n: my third parameter
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[x + i] = *src;
		src++;
	}
	dest[x + i] = '\0';
	return (dest);
}
