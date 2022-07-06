#include <stdio.h>
/**
 * main - prints 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int t1 = 1;
	int t2 = 2;
	int nextterm = t1 + t2;

	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", nextterm);
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
	}
	return (0);
}
