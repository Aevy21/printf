void _printf(const char *format, ...)
{
	int i;
	va_list args;
	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++) {
		if (format[i] == '%') {
			i++;
			if (format[i] == 'c') {
				char c = (char) va_arg(args, int);
				putchar(c);
			} else if (format[i] == 's') {
				char* str = va_arg(args, char*);
				while (*str != '\0') {

					putchar(*str);
					str++;  }

			} else 
			{
				putchar('%');
			}
		} else {
			putchar(format[i]);
		}
	}

	va_end(args
	      );

}

