#include "main.h"

/**
 * print_string - Prints a string to stdout
 * @s: The string to print
 *
 * Return: Number of characters printed
 */
int print_string(const char *s)
{
	int i = 0;

	if (!s) s = "(null)";

	while (s[i]) write(1, &s[i++], 1);

	return (i);
}
