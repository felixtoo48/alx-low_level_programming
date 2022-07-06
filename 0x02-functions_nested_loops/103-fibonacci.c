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
	int n = t1 + t2;
	int sum = 0;

	for (i = 1; i <= 50; i++)
	{
		t1 = t2;
		t2 = n;
		n = t1 + t2;
		while (n <= 4000000)
		{
			if (n % 2 == 0)
			{
				sum += n;
			}
			printf("%d\n", sum);
		}
	}
	return (0);
}
