#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and error is set apprioriately
 */

int _putchar(char C)
{
	return (write(1, &C, 1));
}
