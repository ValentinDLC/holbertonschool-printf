#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 *
 * Return: number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (!str) str = "(null)";

	while (str[i])
	{
		_putchar(str[i++]);
	}
	return (i);
}

/**
 * print_percent - prints a percent character
 * @args: va_list (unused)
 *
 * Return: number of characters printed (always 1)
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

/**
 * print_int - prints an integer
 * @args: va_list containing the integer to print
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int len = 0;
	unsigned int num;

	if (n == INT_MIN)
	{
		len += _putchar('-');
		len += print_number(214748364);
		len += _putchar('8');
		return (len);
	}
	if (n < 0)
	{
		len += _putchar('-');
		num += -n;
	}
	else
	{
		num = n;
	}

	len += print_number(num);

	return (len);
}

/**
 * print_number - helper function to print unsigned number recursively
 * @num: unsigned number to print
 *
 * Return: number of characters printed
 */
int print_number(unsigned int num)
{
	int len = 0;

	if (num / 10)
	{
		len += print_number(num / 10);
	}
	len += _putchar((num % 10) + '0');

	return (len);
}