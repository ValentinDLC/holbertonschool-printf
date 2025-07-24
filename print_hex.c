#include "main.h"

/**
 * print_hex - Prints an unsigned int in hexadecimal format
 * @n: The number to print
 * @uppercase: 1 for uppercase hex, 0 for lowercase
 *
 * Return: Number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
	int len = 0;
	char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (n / 16) len += print_hex(n / 16, uppercase);
	len += print_char(hex_digits[n % 16]);

	return len;
}
