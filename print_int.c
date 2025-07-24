#include "main.h"

/**
 * print_int - Prints an integer
 * @n: The integer to print
 *
 * Return: The number of characters printed
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

	if (num / 10) len += print_int(num / 10);
	len += print_char((num % 10) + '0');
	return (len);
}
