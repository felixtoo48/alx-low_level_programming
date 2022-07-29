#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using mallock
 * @b: Parameter entered
 * Return: Pointer to the allocted memory
 */

void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(sizeof(int) * b);
	
	if (check == NULL)
		exit(98);

	return (check);
}
