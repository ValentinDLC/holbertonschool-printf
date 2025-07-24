#include "main.h"

/**
 * print_percent - Prints a percent character
 *
 * Return: The number of characters printed (1)
 */
int print_percent(void) { return (write(1, "%%", 1)); }
