#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to 2 dimensional array of integers
 * @width: 1st dimension
 * @height: second dimension
 * Return: pointer to two dimansional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0) /* validate input */
		return (NULL);

	grid = malloc(height * sizeof(int *)); /* allocate memory for rows */

	if (grid == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < height; i++) /* allocate memory for columns of eacha row */
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL) /* validate memory */
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* set array values to 0 */
		grid[i][j] = 0;
	}

	return (grid);
}
