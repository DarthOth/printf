#include "main.h"

/**
 * _putchar - function name
 * @c: function param
 * Return: return value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
