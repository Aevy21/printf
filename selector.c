#include "main.h"

/**
 *select_spec - function to Handle format specifiers
 *@ch:foat specifier character
 * Return: Pointer to the appropriate print function
 */
int (*select_spec(char ch))(va_list)
{
	switch (ch) {
		case 's':
			return &print_string;
		case 'c':
			return &print_char;
		case '%':
			return &print_percent;
		case 'd':
		case 'i':
			return &print_digit;
		case 'r':
			return &print_cus;
		case 'o':
			return &print_octal;
		default:
			return &print_per;
	}
<<<<<<< HEAD
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
=======
>>>>>>> 187ed7ee2a518f39c8c5f303257ea1bc1c832af7
}

