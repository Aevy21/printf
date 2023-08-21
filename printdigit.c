#include "main.h"

/**
 * print_digit - Iterative function to format and print an integer.
 *@fmt_specs: A va_list containing the string to print.
 * Return: The number of characters printed
 */
int print_digit(va_list fmt_specs)
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
	while(num > 0)
	{
		_putchar('0' + (num % 10));
		num /= 10;
		charD++;
	}
	return (charD);
}
