#include "main.h"

/**
 * _sqrt_recursion - function name
 * @n: funtion parameter
 * Return: square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: parameter 1
 * @i: parameter 2
 * Return: square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > 0)
		return (-1);
	if (i * i == 0)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
