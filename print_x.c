#include "main.h"

/**
 * print_hex - Prints a hexadecimal representation of an unsigned integer
 * @val: The va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */

int print_hex(va_list val)
{
	int x;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		array[x] = tem % 16;
		tem /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
