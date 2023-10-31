#include <stdio.h>

/**
 * main - prints number of argumenyts passed through
 *
 * @argc: number of command line arguments
 * @argv: array that contains the command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
