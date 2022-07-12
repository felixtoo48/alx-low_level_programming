#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string entred
 * Return: nothing
 */

void rev_string(char *s)
{
	for (f = '\0'; s[f] != 0; f++)
	{
	}
	r_s = 0;
	for (f = f - 1; r_s < f; r_s++)
	{
		character = s[f];
		s[f] = s[r_s];
		s[r_s] = character;
		f--;
	}
}
