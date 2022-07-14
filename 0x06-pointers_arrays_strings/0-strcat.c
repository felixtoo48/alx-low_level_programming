#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string to append source string to
 * @src: source string
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	return (dest);
}
