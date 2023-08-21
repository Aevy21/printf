#include "main.h"

/**
 * print_char - Print a string and count the characters.
 * @fmt_specs: A va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list fmt_specs)
{
	char *str = va_arg(fmt_specs, char *);
	int charC = 0;
	int j;

	for (int j = 0; str[j] != '\0'; j++)
	{
		__putchar(str[j]);
		charC++;


	}

	return (charC);

}

