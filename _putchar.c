#include "main.h"

/**
 * _putchar - Writes the character c to the standard output stream (stdout)
 * @c: The character to print
 *
 * Return: Return value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
