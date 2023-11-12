#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: number of integers
 * Return: void
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, y;

	va_list z;

	va_start(z, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(z, const unsigned int);
		printf("%d", y);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(z);
}
