#include "main.h"

/**
 * printf_char - prints a character
 * @val: The va_list containing the character to print
 *
 * Return: 1 always
 */
int printf_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
