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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /*i is index of null terminator*/
		i++;
	while (src[j] != src[n]) /*append replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
