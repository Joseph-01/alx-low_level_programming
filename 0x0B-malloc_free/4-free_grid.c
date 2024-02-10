#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up a 2d grid
 * @grid: double pointer 2d grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
		free(grid[s]);
	free(grid);
}
