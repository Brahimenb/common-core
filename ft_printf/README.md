*This project has been created as part of the 42 curriculum by benbiki.*

# ft_printf

## Description

The `ft_printf` project consists of recreating the standard C `printf()` function.

The goal is to understand variadic functions, manage different data types, and format output using the `write()` system call.

Supported conversions:

`%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`

## Instructions

Compile the library:

```bash
make
```

This generates `libftprintf.a`.

Clean object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

To use the library:

```bash
cc main.c -L. -lftprintf
```

Include the header in your source file:

```c
#include "ft_printf.h"
```

## Algorithm and Data Structure

The implementation uses a format parser that reads the format string character by character.

When a `%` character is found, the parser identifies the conversion specifier and calls the appropriate helper function.

Variadic arguments are managed using `va_list`, `va_start`, `va_arg`, and `va_end`.

Number conversions use recursive functions to print decimal and hexadecimal digits. A shared hexadecimal function handles lowercase and uppercase output.

The implementation uses simple variables, pointers, and recursive function calls without creating complex data structures.

The number of printed characters is counted and returned. If a writing operation fails, the function returns `-1`.

## Resources

- `man 3 printf`
- `man 3 stdarg`
- `man 2 write`
- C programming documentation and 42 project subject.

### AI Usage

AI tools were used as learning support to understand variadic functions, conversion specifiers, debugging, and test cases.

All implementation decisions and code are reviewed and tested as part of the learning process.