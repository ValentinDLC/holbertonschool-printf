#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifier_f - structure for format specifiers
 * @specifier: the format specifier character
 * @func: pointer to the function that handles this specifier
 *
 * Description: This structure maps format specifiers to their
 * corresponding handler functions
 */
typedef struct specifier_f
{
	char specifier;
	int (*func)(va_list);
} get_specifier;

/* Specifier function selector */
int (*get_specifier_func(char specifier))(va_list);

/* Main printf function */
int _printf(const char *format, ...);

/* Utility function */
int _putchar(char c);

/* Format specifier handler functions */
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(va_list args);

/* Helper functions */
int print_number(unsigned int num);

#endif