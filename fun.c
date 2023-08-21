#include "main.h"

/**
 * print_percent - Print a percent symbol ('%')
 *@fmt_specs:a va_list containing a string to print.
 * Return: 1 (the number of characters printed).
 */
int print_percent(va_list __attribute__ ((unused))fmt_specs)
{
	_putchar('%');
	return (1);
}

