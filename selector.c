#include "main.h"

/**
 *select_spec - function to Handle format specifiers
 *@ch:foat specifier character
 * Return: Pointer to the appropriate print function
 */
int (*select_spec(char ch))(va_list)
{
	char ch;

	if (ch == 's')
	{
		return (&print_string);
	}
	else if (ch == 'c')
	{
		return (&print_char);
	}
	else if (ch == '%')
	{
		return (&print_percent);
	}
	else if (ch == 'd' || ch == 'i')
	{
		return (&print_integer);
	}
	else
	{
		return (NULL);
	}
}

