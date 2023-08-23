#include "main.h"

/**
 *select_spec - function to Handle format specifiers
 *@ch:foat specifier character
 * Return: Pointer to the appropriate print function
 */
int (*select_spec(char ch))(va_list)
{

	static int (*print_func)(va_list);

	if (ch == 's')
	{
		print_func = &print_string;
	}
	else if (ch == 'c')
	{
		print_func = &print_char;
	}
	else if (ch == '%')
	{
		print_func = &print_percent;
	}
	else if (ch == 'd' || ch == 'i')
	{
		print_func = &print_digit;
	}
	else if (ch == 'r')
	{
		print_func = &print_cus;
	}
	else if (ch == 'o')
	{
		print_func = &printf_oct;
	}
	else if (ch == 'x' || ch == 'X')
	{
		print_func = &print_hex;
	}
	else if (ch == 'u')
	{
		print_func = &print_unsigned;
	}
	else
	{
		print_func = &print_per;
	}

	return (print_func);
}

