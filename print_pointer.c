#include "main.h"

/**
 * print_pointer - Prints a pointer address in hexadecimal format
 * @ptr: The pointer to print
 *
 * Return: The number of characters printed
 */
int print_pointer(void *ptr)
{
	unsigned long addr = (unsigned long)ptr;
	int len = 0;
	int i;

	len += print_string("0x");
	if (addr == 0)
	{
		len += print_char('0');
	}
	else
	{
		unsigned long tmp = addr;
		int digits = 0;
		char buffer[16];

		while (tmp)
		{
			int digit = tmp % 16;

			buffer[digits++] = "0123456789abcdef"[digit];
			tmp /= 16;
		}
		for (i = digits - 1; i >= 0; i--)
		{
			len += print_char(buffer[i]);
		}
	}
	return (len);
}
