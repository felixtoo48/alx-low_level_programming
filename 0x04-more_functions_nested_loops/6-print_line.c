#include "main.h"

/**
 * print_line - draws straight line in terminal
 *@n: no of times character _ is printed
 * Return: nothing
 */

void print_line(int n)
{
	int num = n;

	for (num = n; num > 0; num--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
