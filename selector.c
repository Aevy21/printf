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
			return (&print_string);
		case 'c':
			return (&print_char);
		case '%':
			return (&print_percent);
		case 'd':
		case 'i':
			return (&print_digit);
		case 'r':
			return (&print_cus);
		case 'o':
			return (&printf_oct);
		case 'x':
		case 'X':
			return (&print_hex);
		case 'u':
			return (&print_unsigned);
		default:
			return (&print_per);
	}
}
