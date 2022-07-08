#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 * Return: nothing
 */

void print_square(int size)
{
	int n = size;
	int j = size;

	for (n = size; n > 0; n--)
	{
		for (j = n; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
