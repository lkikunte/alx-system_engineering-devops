#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees 2 dimensional grid created by alloc_grid function.
* @grid: poiter to alloc_grid
* @height: size of second array
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
