#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: name of person
 * @f: hold string name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
