#include "main.h"

/**
 * print_digits- function that prints unsigned number
 * @fmt_specs: unsigned n
 * Descriptions: prints unsigned number with putchar
 * Return: size the output
 */
int print_digits(va_list fmt_specs)
{
	unsigned int len, base_ten, digit, num;
	int count = 0;
	unsigned int j = 1;

	unsigned int n = va_arg(fmt_specs, unsigned int);

	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;

			base_ten = 1;
			for (; j <= len - 1; j++)
				base_ten *= 10;
			for (; j <= len; j++)
			{
				digit = n / base_ten;
				_putchar(digit + '0');
				count++;
				n -= digit * base_ten;
				base_ten /= 10;

			}
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

