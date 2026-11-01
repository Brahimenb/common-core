*This project has been created as part of the 42 curriculum by benbiki.*

# Libft

## Description

Libft is my first C library for the 42 curriculum. The goal is to recode standard libc functions and add useful utilities, to understand how they work internally (pointers, memory management, strings). Everything is compiled into a static library, `libft.a`, built with `ar`.

### Library description

**Part 1: libc functions (reimplemented with the `ft_` prefix)**
- Character checks and conversion: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- Strings: `strlen`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strlcpy`, `strlcat`, `strdup`, `atoi`
- Memory: `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`

**Part 2: additional functions**
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`: allocate and return new strings
- `ft_itoa`: converts an int to a string
- `ft_strmapi`, `ft_striteri`: apply a function to each character
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: write to a file descriptor

**Part 3: linked lists (`t_list`)**
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything
```

To use it, include the header and link the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```
```c
#include "libft.h"
```

## Resources

- Linux manual pages (`man`)
- The Libft subject provided by 42
- C documentation and online tutorials

### AI usage

AI was used to clarify C concepts (pointers, memory management) and to
understand the expected behaviour of some functions. 