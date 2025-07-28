#include "main.h"

/**
 * _printf - Custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;
	int (*func)(va_list);

	if (!format)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			func = get_specifier_func(format[i]);

			if (func)
			{
				len += func(args);
			}
			else
			{
				len += _putchar('%');
				len += _putchar(format[i]);
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}

int (*get_specifier_func(char specifier))(va_list)
{
	get_specifier specifiers[] = {{'d', print_int},	    {'i', print_int},
				      {'s', print_string},  {'c', print_char},
				      {'%', print_percent}, {0, NULL}};

	int i = 0;

	while (specifiers[i].specifier)
	{
		if (specifiers[i].specifier == specifier)
			return (specifiers[i].func);
		i++;
	}
	return (NULL);
}