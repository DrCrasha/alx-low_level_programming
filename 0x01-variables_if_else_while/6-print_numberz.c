#include <stdio.h>



/**
 * main - entry point to code
 * Description: prints chat below 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
