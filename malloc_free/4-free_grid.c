#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2D array of integers
 * @grid: the 2D array to free
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
