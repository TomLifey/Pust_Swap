*This project has been created as part of the 42 curriculum by mabutair.*

## Description

Libft is my first custom C library from the 42 curriculum. The goal of this project was to rebuild several standard C library functions from scratch, along with writing a few extra utility functions. It covers everything from basic string and memory manipulation to working with linked lists. Doing this really helped me understand how these functions actually work under the hood and how to manage memory properly in C.

## Instructions

To build the library, simply run:

```
make

```

This will compile everything and create the static library `libft.a`.

To use it in your own C projects, include the header in your files:

```
#include "libft.h"

```

Then, compile your code with the library like this:

```
cc (your_program).c -L. -lft -o program.

```

### Makefile Commands

* `make` or `make all`: Compiles the library.

* `make clean`: Cleans up the object (`.o`) files.

* `make fclean`: Removes both the object files and `libft.a`.

* `make re`: Cleans everything and recompiles from scratch.

## Functions

### Part 1 — Libc Functions

My own implementations of standard C library functions.

* **Characters:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

* **Strings:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`

* **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

* **Math/Other:** `ft_atoi`

### Part 2 — Additional Functions

Extra utility functions for string manipulation, conversion, and file descriptor output.

* `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`

* `ft_strmapi`, `ft_striteri`

* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 — Linked Lists

Functions for creating and managing linked lists using the custom `t_list` struct.

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`

* `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Resources

* The official Libft subject PDF.

* Linux manual pages (`man`) for checking exactly how the original functions behave.

* Peer learning and discussions with fellow 42 students.

* W3Schools and GeeksforGeeks for C programming references.

* YouTube tutorials and Google searches for debugging and understanding concepts.