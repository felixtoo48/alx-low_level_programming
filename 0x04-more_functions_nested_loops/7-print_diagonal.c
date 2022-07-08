#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of times the character is printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int num = n;

	for (num = n; num > 0; num--)
	{
		_putchar('\');
	}
	_putchar('\n');
}
