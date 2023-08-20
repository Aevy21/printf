#include "main.h"

/**
 * _printf - Print formatted output to stdout.
 * @format: A format string containing format specifiers.
 * Return: The number of characters printed (excluding the null byte).
 *Returns: -1 on error.
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
	{
		return (-1);
	}
	char c;
	char *str;
	int i = 0;
	va_list args;

	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				char c = (char)va_arg(args, int);

				putchar(c);
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char *);

				while (*str != '\0')
				{

					putchar(*str);
					str++;
				}
			}
			else
			{
				putchar('%');
			}
		}
		else
		{
			putchar(format[i]);
		}
	}
	va_end(args);
}
