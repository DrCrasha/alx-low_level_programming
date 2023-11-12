#include "variadic_functions.h"

/**
 * print_all - prints any argument
 * @format: argument specifier
 * Return: any argument given
 *
 */

void print_all(const char * const format, ...)
{
	int x, check;

	char *str;
	va_list spec;

	va_start(spec, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'x':
				printf("%d", va_arg(spec, int));
				check = 0;
				break;
			case 'f':
				printf("%f", va_arg(spec, double));
				check = 0;
				break;
			case 'c':
				printf("%c", va_arg(spec, int));
				check = 0;
				break;
			case 's':
				str = va_arg(spec, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check = 1;
				break;
		}
		if (format[x + 1] != '\0' && check == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(spec);
}
