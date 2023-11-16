#include "main.h"

/**
 * print_oct - Prints an octal representation
 * of an unsigned integer
 * @val: The va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */

int print_oct(va_list val)
{
	int o;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (o = 0; o < counter; o++)
	{
		array[o] = tem % 8;
		tem /= 8;
	}
	for (o = counter - 1; o >= 0; o--)
	{
		_putchar(array[o] + '0');
	}
	free(array);
	return (counter);
}
