#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of characters
 * @size: size of the memory
 * @c: character entered
 * Return: on success 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0) /* validate size input */
		return (0);
	
	p = malloc(sizeof(char) * size); /* allocate memory */

	if (p == NULL) /* validate memory */
		return (0);

	while (i < size) /* set array values to char c */
	{
		p[i] = c;
		i++;
	}
	return (p);
}
