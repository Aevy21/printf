#include "main.h"
<<<<<<< HEAD

/**
 * printf_oct - prints an octal number.
 * @fmt_specs : arguments.
 * Return: counter.
 */
int printf_oct(va_list fmt_specs)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(fmt_specs ,unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

=======
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
>>>>>>> 187ed7ee2a518f39c8c5f303257ea1bc1c832af7
