#include "main.h"

int print_hex(va_list fmt_specs)
{
	unsigned int num = va_arg(fmt_specs, unsigned int);
	int print = 0;
	int uppercase = 1;

	print = _x(num, print, uppercase);

	return (print);
}
