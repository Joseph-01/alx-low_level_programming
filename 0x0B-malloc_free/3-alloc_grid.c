#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a  2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: the int size width
 * @height: the int size height
 * Return: the pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int s, k;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		grid[s] = malloc(width * sizeof(**grid));
		if (grid[s] == NULL)
		{
			for (s--; s >= 0; s--)
				free(grid[s]);
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			grid[s][k] = 0;
	}

	return (grid);
}
