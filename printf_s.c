#include "main.h"

/**
 * printf_s - function name
 * @list: function param
 * Return: return value
 */

int printf_s(va_list list)
{
	int i, len;
	char *c;

	c = va_arg(list, char *);
	if (c == NULL)
	{
		c = "(null)";
		len = _strlen(c);
		for (i = 0; i < len; i++)
		{
			_putchar(c[i]);
		}
		return (len);
	}
	else
	{
		len = _strlen(c);
		for (i = 0; i < len; i++)
		{
			_putchar(c[i]);
		}
		return (len);
	}
}
