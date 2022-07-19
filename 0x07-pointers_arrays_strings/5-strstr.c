#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: main string to search
 * @needle: Small string to search withing haystack string
 * Return: pointer to index of string at first occurrence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* repeat all through haystack */
	{
		/* if a byte matches first character of needle */
		/* iterate through needle */
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			} /* if all string is matched return haystack */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL); /* no match found */
}
