#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlen_const(const char *s);
int printf_c(va_list list);
int printf_s(va_list list);
int printf_p(void);


#endif
