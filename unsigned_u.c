#include "main.h"

/**
 * print_unsigned - a function that prints unsigned int to stdout
 * @fmt_specs: list being passed
 * Return: char count
 */
int print_unsigned(va_list fmt_specs)
{
	unsigned int n;
	int expo = 1;
	int len = 0;

	n = va_arg(fmt_specs, unsigned int);

	while (n / expo > 9)
		expo *= 10;
	while (expo != 0)
	{
		len = len + _putchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}
	return (len);
}

