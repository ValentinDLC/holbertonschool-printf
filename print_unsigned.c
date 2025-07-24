#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer.
 * @n: The unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(unsigned int n)
{
	int len = 0;

	if (n / 10) len += print_unsigned(n / 10);

	len += print_char((n % 10) + '0');

	return (len);
}
