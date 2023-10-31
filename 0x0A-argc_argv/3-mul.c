#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 *
 * @argc: number of command line argument
 * @argv: array that contains the command line argument
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
