#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of characters and initializes with a specific char
 * @size: size of the memory
 * @c: character entered
 * Return: on success 0
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size <= 0) /* validate size input */
		return (NULL);
	arr = malloc(sizeof(char) * size); /* allocate memory */

	if (arr == NULL) /* validate memory */
		return (NULL);

	while (i < (int)size) /* set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';
	return (arr);
}
