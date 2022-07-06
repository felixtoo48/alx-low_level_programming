#include "main.h"
/**
 * print_alphabet_x10 - 10 times followed by a new line
 *
 * Return: 0 Always
 */

void print_alphabet_x10(void)
{
	int i = '0';
	char c;

	while (i <= '9')
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

		i++;
	}
}
