#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @fmt_specs: The character to print
 *
 * Return: 1.
 */
int print_char(va_list fmt_specs)
{
	unsigned char charC;

	charC = va_arg(fmt_specs, int);

	_putchar(charC);
	return (1);
}
/**
 * print_per -function to print %
 *@fmt_specs:stringto be formatted
 * Return: 1.
 */
int print_per(__attribute__ ((unused))va_list __attribute__ ((unused))fmt_specs)
{
	_putchar('%');

	return (1);
}


