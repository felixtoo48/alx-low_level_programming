#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	else if (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	else
	{
		printf("%d, ", n);
	}
	printf("\n");
}

