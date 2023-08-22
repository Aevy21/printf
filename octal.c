#include "main.h"
/**
* print_octal - unsigned int argument is converted to unsigned octal
* @fmt_specs: unsigned to be converted
* Descriptions: prints unsigned octal
* Return: size the output
*/
int print_octal(va_list fmt_specs)
{
	unsigned int len, base_eit, j, digit, n, num;
	int count = 0;
	n = va_arg(fmt_specs, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		base_eit = 1;
		for (j = 1; j <= len - 1; j++)
			base_eit *= 8;
		for (j = 1; j <= len; j++)
		{
			digit = n / base_eit;
			_putchar(digit + '0');
			count++;
			n -= digit * base_eit;
			base_eit /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
