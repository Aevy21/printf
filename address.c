#include "main.h"

/**
 * print_address - Custom function to print a pointer address in the desired format.
 * @fmt_specs: The va_list containing the pointer argument.
 */
int print_address(va_list fmt_specs)
{
	char *hex;
	int num_digits = 0;
	unsigned long addr;
	int i = num_digits - 1;
	int j = 0;
	char buffer[18];
	int len =2;
	unsigned long temp;
	/* Fetch the pointer argument using va_arg */
	void *ptr = va_arg(fmt_specs, void *);

	hex = "0123456789abcdef";
	addr = (unsigned long)ptr;
	temp = addr;
	do 
	{
		num_digits++;
		temp >>= 4;
	}
	while (temp != 0);

	buffer[0] = '0';
	buffer[1] = 'x';	
	/* Fill the buffer with hexadecimal digits */
	for (; i >= 0; i--)
	{
		buffer[len++] = hex[(addr >> (i * 4)) & 0xF];
	}

	/* Null-terminate the buffer */
	buffer[len] = '\0';

	/* Loop through the buffer and print each character */
	for (; buffer[j] != '\0'; j++)
	{
		_putchar(buffer[j]);
	}
	return (len);
}

