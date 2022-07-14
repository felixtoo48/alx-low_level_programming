#include "main.h"

/**
 * _strncat - concantenates two strings
 * @dest: destination string
 * @src: source string
 * @n: at most number of bytes used
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int d;
	int s;

	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0' && s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	return (dest);
}
