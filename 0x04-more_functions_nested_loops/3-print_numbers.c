#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: nothing
 */

void print_numbers(void);
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
