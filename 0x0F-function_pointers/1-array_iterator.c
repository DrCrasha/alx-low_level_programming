#include "function_pointers.h"

/**
 * array_iterator - Function name
 * @array: Function parameter 1
 * @size: size of the array
 * @action: Function parameter 2
 * Return: void
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(*array);
		array++;
	}
}
