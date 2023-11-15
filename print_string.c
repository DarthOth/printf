#include "main.h"

/**
 * printf_string - Prints a null-terminated string
 * @val: The va_list containing the pointer to the string
 *
 * Return: The length of the printed string
 */

int printf_string(va_list val)
{
	char *str;
	int a;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (a = 0; a < length; a++)
			_putchar(str[a]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (a = 0; a < length; a++)
			_putchar(str[a]);
		return (length);
	}
}
