#include "main.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Variable number of arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	char spec;
	va_list fmt_specs;
	int i = 0;

	va_start(fmt_specs, format);

	if (format[0] == '\0')
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			spec = format[i + 1];
			counter = counter + (*select_spec(spec))(fmt_specs);
			i++;
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}

	va_end(fmt_specs);

	return (counter);
}
