#include <stdio.h>
/**
 * main - prints 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int t1 = 0;
	int t2 = 1;
	int nextterm = t1 + t2;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", nextterm);
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2
	}
	return (0);
}
