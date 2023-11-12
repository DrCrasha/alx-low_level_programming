#include "variadic_functions.h"

/**
 * sum_them_all - sums all the passed parameters
 * @n: number of arguments passed
 * Return: Sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0; /* set to 0 */
	unsigned int i;

	va_list holder; /* pointer to the 3 dots */

	va_start(holder, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(holder, const unsigned int);
		}
	}
	va_end(holder);
	return (sum);
}
