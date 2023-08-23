#include "main.h"

/**
 * print_cus - Custom print function
 * @fmt_specs: List of arguments
 * Return: The total countr of characters printed.
 */
int print_cus(va_list fmt_specs)
{
	int countr = 0;

	while (1)
	{
		char current_char = va_arg(fmt_specs, int);

		if (current_char == '\0')
			return (-1);

		if (current_char == '%' || current_char  == 'r')
		{
			countr += _putchar('%');

			countr += _putchar('r');
		}
		else
		{
			countr += _putchar(current_char);
		}
	}


	return (countr);
}

