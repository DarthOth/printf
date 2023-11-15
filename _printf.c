#include "main.h"

/**
 * _printf - function name
 * @format: function param
 * Return: return value
 */

int _printf(const char *format, ...)
{
	int i, print, print_c, width, size, precision, flags, count = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	print = print_c = 0;
	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[count++] = format[i];
			if (count == BUFF_SIZE)
				printf_buffer(buffer, &buff_ind);
			print_c++;
		}
		else
		{
			print_buffer(buffer, &count);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			print = handle_print(format, &i, list, buffer, flags, width, precision, size);
			if (print == -1)
				return (-1);
			print_c += print;
		}
	}
	print_buffer(buffer, &count);
	va_end(list);
	return (print_c);
}

/**
 * print_buffer - function name
 * @buffer: function param
 * @buff_count: function param
 */

void print_buffer(char buffer[], int *buff_count)
{
	if (*buff_count > 0)
		write(1, &buffer[0], *buff_count);
	*buff_count = 0;
}
