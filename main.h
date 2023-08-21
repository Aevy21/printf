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
int print_percent(va_list fmt_specs);
int (*select_spec(char ch))(va_list)
;
int _printf(const char *format, ...)
;
int print_digit(va_list fmt_specs);

#endif

