#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal format
 * @n: The unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int n)
{
	int len = 0;

	if (n / 8)
	{
		len += print_octal(n / 8);
	}

	len += print_char((n % 8) + '0');

	return (len);
}
