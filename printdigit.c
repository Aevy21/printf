#include "main.h"

/**
 * print_integer - Recursive function to format and print an integer.
 *@fmt_specs: A va_list containing the string to print.
 * Return: The number of characters printed
 */
int print_integer(va_list fmt_specs)
{
	int charD = 0;
	int num;

	num = va_arg(fmt_specs, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		charD++;
	}
	if (num / 10 != 0)
	{
		charD += print_integer(fmt_specs);
	}
	_putchar('0' + (num % 10));
	charD++;
	return (charD);
}
