#include "main.h"

/**
 * print_bin - Prints the binary representation of an unsigned integer
 * @val: The va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */

int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int p, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int q;

	for (p = 0; p < 32; p++)
	{
		q = ((a << (31 - p)) & num);
		if (q >> (31 - p))
			flag = 1;
		if (flag)
		{
			b = q >> (31 - p);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
