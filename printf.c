#include "main.h"

/**
 * _printf - Print formatted output to stdout.
 * @format: A format string containing format specifiers.
 * Return: The number of characters printed (excluding the null byte).
 *Returns: -1 on error.
 */
int _printf(const char *format, ...)
{
	int print_char = 0;
	va_list fmt_spec;
	va_start(fmt_spec ,format);

	if(format == NULL)
	{
		return (-1);
	}
	while(*format)
	{
		if(*format != '%')
		{
			write(1,format,1);
			print_char++;
		}
		else
		{
			format++;
			}
			if(*format == 'c')
			{
				char c =va_arg(fmt_spec,int);
				write(1,&c ,1);
				print_char++;
			}
			if(*format == 's')
			{
				char *str = va_arg(fmt_spec,char*);		
				while(*str != '\0')				write(1, str, strlen(str));
			}
			else if (*format == '%')
			{
				write(1, format,1);
				print_char++;					}
			format++;
		}
		va_end(fmt_spec);

		return (print_char);
	}
