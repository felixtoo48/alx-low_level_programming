#include "main.h"
/**
 * print_sign - print sign of a number
 * @c: character to check
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */

int print_sign(int c)
	int n;

{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ("-1");
	}
	_putchar('\n');
}
