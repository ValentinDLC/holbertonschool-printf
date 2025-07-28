# Printf Project

## Description

This project is a custom implementation of the `printf` function in C. The `_printf` function produces output according to a format string and writes to the standard output stream (stdout).

## Project Structure

```
holbertonschool-printf/
├── main.h              # Header file with prototypes and structures
├── _printf.c           # Main printf function implementation
├── _putchar.c          # Character output function
├── print_functions.c   # Format specifier handler functions
├── README.md           # This file
└── man_3_printf        # Manual page
```

## Features

The `_printf` function handles the following conversion specifiers:

- `%c` - Character
- `%s` - String
- `%d` - Signed decimal integer
- `%i` - Signed decimal integer
- `%%` - Literal percent sign

## Function Prototype

```c
int _printf(const char *format, ...);
```

## Return Value

Returns the number of characters printed (excluding the null byte used to end output to strings).

## Compilation

The code should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

For testing purposes, you may want to use:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Usage Example

```c
#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello, %s! You are %d years old.\n", "World", 42);
    _printf("Characters printed: %d\n", len);

    return (0);
}
```

Output:

```
Hello, World! You are 42 years old.
Characters printed: 32
```

## File Descriptions

### main.h

Header file containing:

- Function prototypes
- Structure definition for format specifiers
- Required includes

### \_printf.c

Main implementation file containing:

- `_printf()` - Main printf function
- `get_specifier_func()` - Function to match specifiers with handlers

### \_putchar.c

Contains the `_putchar()` function that writes a single character to stdout using the `write` system call.

### print_functions.c

Contains handler functions for each format specifier:

- `print_char()` - Handles `%c`
- `print_string()` - Handles `%s`
- `print_int()` - Handles `%d` and `%i`
- `print_percent()` - Handles `%%`
- `print_number()` - Helper function for integer printing

## Error Handling

- Returns -1 if format string is NULL
- Handles NULL strings by printing "(null)"
- Properly handles INT_MIN edge case
- Handles unknown format specifiers by printing them literally

## Coding Standards

- Follows Betty coding style
- Uses only authorized functions: `write`, `malloc`, `free`, `va_start`, `va_end`, `va_copy`, `va_arg`
- No global variables
- Maximum 5 functions per file
- All files end with a newline

## Limitations

This implementation does not handle:

- Buffer handling optimization
- Flag characters (-, +, 0, #, space)
- Field width specifications
- Precision specifications
- Length modifiers (l, ll, h, hh)

## Authors

- Valentin Dardenne
- Write your name ?

## Repository

GitHub repository: holbertonschool-printf
