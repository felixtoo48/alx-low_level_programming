#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 * Return: nothing
 */

void print_square(int size)
{
	int n;
	int j;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

