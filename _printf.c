#include "main.h"

/**
 * _printf - Custom function that mimics printf
 * @format: The format string to be parsed
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;

	va_start(args, format);

	if (format == NULL) return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i]) break;

			switch (format[i])
			{
				case 'c':
					len += print_char(va_arg(args, int));
					break;
				case 's':
					len +=
					    print_string(va_arg(args, char *));
					break;
				case 'd':
				case 'i':
					len += print_int(va_arg(args, int));
					break;
				case 'u':
					len += print_unsigned(
					    va_arg(args, unsigned int));
					break;
				case 'o':
					len += print_octal(
					    va_arg(args, unsigned int));
					break;
				case 'x':
					len += print_hex(
					    va_arg(args, unsigned int), 0);
					break;
				case 'X':
					len += print_hex(
					    va_arg(args, unsigned int), 1);
					break;
				case 'p':
					len +=
					    print_pointer(va_arg(args, void *));
					break;
				case '%':
					len += print_char('%');
					break;
				default:
					/*
					 * Unknown specifier, print
					 * "%<character>"
					 */
					len += print_char(format[i]);
					break;
			}
			i++;
		}
		else
		{
			len += print_char(format[i]);
			i++;
		}
	}

	va_end(args);
	return len;
}
