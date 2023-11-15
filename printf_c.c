#include "main.h"

/**
 * printf_c - function name
 * @list: function param
 * Return: return value
 */

int printf_c(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
