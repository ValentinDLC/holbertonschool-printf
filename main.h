#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* Prototype for _printf */
int _printf(const char *format, ...);

/* Prototypes for display functions */
int print_char(char c);
int print_string(const char *s);
int print_percent(void);
int print_int(int n);
int print_unsigned(unsigned int n);
int print_unsigned_helper(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, int uppercase);
int print_pointer(void *ptr);

#endif /* MAIN_H */
