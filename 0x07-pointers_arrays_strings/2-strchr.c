#include "main.h"
#define NULL 0

/**
 * _strchr - locates character in a string
 * @s: string being pointed to for scanning
 * @c: character to be searched
 * Return: pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* Find a match */
		i++;
	if (s[i] == c)  /* if match assign to address */
		return (&s[i]);
	else
		return (NULL);
}
