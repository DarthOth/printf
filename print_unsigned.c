#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer value
 * @args: The va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */

int print_unsigned(va_list args)
{
	unsigned int a = va_arg(args, unsigned int);
	int num, last = a % 10, digit, exp = 1;
	int  p = 1;

	a = a / 10;
	num = a;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a;
		last = -last;
		p++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			p++;
		}
	}
	_putchar(last + '0');

	return (p);
}
