#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#define BUFF_SIZE 1024
int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_count);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);


#endif
