#include "main.h"
/**
 * times_table - print multiplication table 
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			p = (i * j);
			if (j == 0)
			{
				_putchar('0' + p);
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + p);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 19));
			}
		}
		_putchar('\n');
		_putchar(' ');
	}
}
