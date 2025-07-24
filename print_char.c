#include "main.h"

/**
 * print_char - Prints a character to standard output
 * @c: The character to print
 *
 * Return: Number of bytes written (always 1)
 */
int print_char(char c) { return (write(1, &c, 1)); }
