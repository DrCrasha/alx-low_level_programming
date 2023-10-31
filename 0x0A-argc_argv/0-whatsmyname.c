#include <stdio.h>

/**
 * main - prints its name, followed by new line
 *
 * @argc: number of command line argument
 * @argv: array that contains the command line argument
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
