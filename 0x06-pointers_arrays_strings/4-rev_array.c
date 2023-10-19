#include "main.h"

/**
 * reverse_array - function name
 * @a: parameter 1
 * @n: parameter 2
 *
 */


void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
