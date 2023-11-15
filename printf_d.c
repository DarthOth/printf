#include "main.h"

/**
 * printf_d - function name
 * @list: function param
 * Return: return value
 */

int printf_d(va_list list)
{
	int i, n, number, last = n % 10, d, m = 1, ex = 1;

	n = va_arg(list, int);
	n = n / 10;
	number = n;
	if (last < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		last = -last;
		m++;
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
			m++;
		}
	}
	_putchar(last + '0');
	return (m);


	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
