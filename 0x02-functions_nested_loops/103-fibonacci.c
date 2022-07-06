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
	int sum = 0;

	for (i = 1; i <= 50; i++)
	{
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
		while (nextterm <= 4000000)
		{
			if (nextterm % 2 == 0)
			{
				sum += nextterm;
			}
			printf("%d\n", sum);
		}
	}
	return (0);
}
