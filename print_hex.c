#include "main.h"

/**
 * print_hex - Prints an unsigned integer in hexadecimal format
 * @n: The unsigned integer to print
 * @uppercase: Flag to determine case (1 for uppercase, 0 for lowercase)
 *
 * Return: The number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
	int len = 0;
	char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (n / 16) len += print_hex(n / 16, uppercase);
	len += print_char(hex_digits[n % 16]);
	return (len);
}
