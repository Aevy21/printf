#include "main.h"

/**
 * print_string - Print a string and return the number of characters printed.
 * @fmt_specs: A va_list containing the string to print.
 * Return: The number of characters printed.
 */
int print_string(va_list fmt_specs)
{
	char *str = va_arg(fmt_specs, char *);
	int charS = 0;
	int j;

	for (int j = 0; str[j] != '\0'; j++)
	{
		__putchar(str[j]);
		charS++;
	}

	return (charS);
}

