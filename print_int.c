#include "main.h"

/**
 * print_int - Prints an integer to standard output
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int print_int(int n)
{
	int len = 0;
	unsigned int num;

	if (n < 0)
	{
		len += print_char('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
	{
		len += print_int(num / 10);
	}

	len += print_char((num % 10) + '0');

	return (len);
}

/**
 * print_unsigned_helper - Helper function to print unsigned int
 * @n: The unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_unsigned_helper(unsigned int n)
{
	int len = 0;

	if (n / 10)
	{
		len += print_unsigned_helper(n / 10);
	}

	len += print_char((n % 10) + '0');

	return (len);
}
