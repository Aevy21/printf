#include "main.h"
/**
 * print_digit - Iterative function to format and print an integer.
 * @fmt_specs: A va_list containing the string to print.
 * Return: The number of characters printed.
 */
int print_digit(va_list fmt_specs)
{
	int charD = 0;
	int num;
	int digits[10];
	int num_digits = 0;
	int i = num_digits - 1; 
	num = va_arg(fmt_specs, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		charD++;
	}
	do
	{
		digits[num_digits] = num % 10;
		num /= 10;
		num_digits++;
	} while (num > 0);
	for (; i < digits[i]; i++)
	{
		_putchar('0');
		charD++;
	}
	return charD;
}
