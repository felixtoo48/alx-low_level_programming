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
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
