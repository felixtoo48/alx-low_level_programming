#include "main.h"

/**
 * print_most_numbers - print most mumbers of 0 to 9
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}