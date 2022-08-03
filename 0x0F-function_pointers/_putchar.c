#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: character to print
 *
 * Return: on success 1
 * on erro, -1 is returned, and errono is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 2));
}
