#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function name
 * @grid: parameter 1
 * @height: parameter 2
 * Return: Always 0
 *
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
