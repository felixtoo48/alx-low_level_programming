#include "main.h"
/**
 * prints_alphabet - 10 times followed by a new line
 *
 * Return: 0 Always
 */

void print_alphabet_x10(void)
{
	char c;

	while (c <= 'j')
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	c++;
}
