#include "main.h"
/**
 * times_table - print multiplication table
 * 
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(i*j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		_putchar(' ');
	}
}
