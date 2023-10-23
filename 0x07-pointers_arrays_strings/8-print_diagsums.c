#include "main.h"

/**
 * print_diagsums - function name
 * @a: parameter 1
 * @size: parameter 2
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		y += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", x, y);
}
