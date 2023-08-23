#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int puts(const char *string);

int _printf(const char *format, ...);
int print_string(va_list fmt_specs);
int print_char(va_list fmt_specs);
int (*select_spec(char ch))(va_list)
;
int _printf(const char *format, ...)
;
int print_digit(va_list fmt_specs);
int print_per(va_list __attribute__ ((unused))fmt_specs);
int print_percent(va_list __attribute__ ((unused))fmt_specs);
int print_digits(va_list fmt_specs);
int print_cus(va_list fmt_specs);
int printf_oct(va_list fmt_specs);
int print_hex(va_list fmt_specs);
int _x(unsigned int num, int print, int uppercase);
int print_unsigned(va_list fmt_specs);

#endif

