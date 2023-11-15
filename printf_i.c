#include "main.h"

/**
 * printf_i - function name
 * @list: function param
 * Return: return value
 */

int printf_i(va_list list)
{
	int n, number, last = n % 10, d, i = 1, ex = 1;

	n = n / 10;
	number = n;
	if (last < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		last = -last;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10;
		}
		number = n;
		while (ex > 0)
		{
			d = number / ex;
			_putchar(d + '0');
			number = number - (d * ex);
			ex = ex / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
