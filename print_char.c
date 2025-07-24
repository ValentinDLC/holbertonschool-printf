#include "main.h"

/**
 * print_char - Prints a single character to stdout
 * @c: The character to print
 *
 * Return: The number of characters printed (1 on success)
 */
int print_char(char c) { return (write(1, &c, 1)); }
