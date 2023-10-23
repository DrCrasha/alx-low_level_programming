#include "main.h"

/**
 * _memcpy - Function name
 * @dest: paramenter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: copied memory
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
