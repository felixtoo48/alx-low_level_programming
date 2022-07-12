#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string eentered
 * Return: nothing
 */

void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
}			
