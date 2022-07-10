#include <stdio.h>
#include "main.h"

/**
 * main - print numbers 1 to 100
 *
 * Return: Always 0 (success"
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("BUZZ");
			printf(" ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
}
