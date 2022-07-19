#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: character pointing to a certain memory point
 * @b: constant byte
 * @n: n bytes of memory pointed
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
