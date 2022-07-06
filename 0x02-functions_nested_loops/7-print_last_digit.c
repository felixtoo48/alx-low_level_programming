#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit number
 */

int print_last_digit(int n)
{
	if (n > 0 || n == 0)
	{
	_putchar('0' + n % 10);
	return (n % 10);
	}
	else
	{
		n *= -1;
	_putchar('0' + n % 10);
	return (n % 10);
	}
}
