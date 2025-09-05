<h1 align="center">
  <img alt="Libft" width="20%" height="20%" src="https://github.com/Welsete/Welsete/blob/main/Badges/libft_b.png" />
</h1>

> 42sp School project

This repository contains all archives for the project __libft__ in the __42sp common core cursus__. It's a custom-made library of useful functions in __C language__. The repository includes the `Makefile` and the `libft.h` library.

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
  <a href="#grade">Grade</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instructions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
</h2>

## About

This project is a __C library__ of useful functions that are allowed to be used in future __42 School cursus__ projects. With access to this library, the coding proccess in incoming projects will be more effective. The aim of rewrite this functions is to get a better understanding of them, and get a whide range of utilities for the next projects.

The code in this repository follows [the rules of the Norminette](https://github.com/42School/norminette).

## Grade
<img alt="Libft" width="15%" height="15%" src="https://github.com/Welsete/Welsete/blob/main/Badges/grademe.png" />

## Index

### Functions from `<ctype.h>` library
* [`ft_isascii`](https://github.com/Welsete/libft/blob/main/ft_isascii.c) - Check if a character is a 7-bit ASCII character.
* [`ft_isalpha`](https://github.com/Welsete/libft/blob/main/ft_isalpha.c) - Check if a character is alphabetic.
* [`ft_isdigit`](https://github.com/Welsete/libft/blob/main/ft_isdigit.c) - Check if a character is a decimal digit.
* [`ft_isalnum`](https://github.com/Welsete/libft/blob/main/ft_isalnum.c) - Check if a character is alphanumeric.
* [`ft_isprint`](https://github.com/Welsete/libft/blob/main/ft_isprint.c) - Check if a character is printable (including space).
* [`ft_tolower`](https://github.com/Welsete/libft/blob/main/ft_tolower.c) - Convert a character to lowercase.
* [`ft_toupper`](https://github.com/Welsete/libft/blob/main/ft_toupper.c) - Convert a character to uppercase.

### Functions from `<stdlib.h>` library
* [`ft_atoi`](https://github.com/Welsete/libft/blob/main/ft_atoi.c) - Convert an ASCII string to an integer.
* [`ft_calloc`](https://github.com/Welsete/libft/blob/main/ft_calloc.c) - Allocate memory for an array and initialize it to zero. Returns a `void *` that can be cast to any type.

### Functions from `<strings.h>` library
* [`ft_bzero`](https://github.com/Welsete/libft/blob/main/ft_bzero.c) - Set a memory block to zero.
* [`ft_memset`](https://github.com/Welsete/libft/blob/main/ft_memset.c) - Fill a block of memory with a given value.
* [`ft_memchr`](https://github.com/Welsete/libft/blob/main/ft_memchr.c) - Locate the first occurrence of a byte in memory.
* [`ft_memcmp`](https://github.com/Welsete/libft/blob/main/ft_memcmp.c) - Compare two memory blocks.
* [`ft_memmove`](https://github.com/Welsete/libft/blob/main/ft_memmove.c) - Copy memory areas, handling overlapping correctly.
* [`ft_memcpy`](https://github.com/Welsete/libft/blob/main/ft_memcpy.c) - Copy memory from one location to another.

### Functions from `<string.h>` library
* [`ft_strlen`](https://github.com/Welsete/libft/blob/main/ft_strlen.c) - Get the length of a string.
* [`ft_strchr`](https://github.com/Welsete/libft/blob/main/ft_strchr.c) - Find the first occurrence of a character in a string.
* [`ft_strrchr`](https://github.com/Welsete/libft/blob/main/ft_strrchr.c) - Find the last occurrence of a character in a string.
* [`ft_strnstr`](https://github.com/Welsete/libft/blob/main/ft_strnstr.c) - Locate a substring within a string.
* [`ft_strncmp`](https://github.com/Welsete/libft/blob/main/ft_strncmp.c) - Compare two strings up to a given length.
* [`ft_strdup`](https://github.com/Welsete/libft/blob/main/ft_strdup.c) - Duplicate a string using `malloc`.
* [`ft_strlcpy`](https://github.com/Welsete/libft/blob/main/ft_strlcpy.c) - Copy a string with size limit.
* [`ft_strlcat`](https://github.com/Welsete/libft/blob/main/ft_strlcat.c) - Concatenate strings with size limit.

### Non-standard functions
* [`ft_itoa`](https://github.com/Welsete/libft/blob/main/ft_itoa.c) - Convert an integer to a string.
* [`ft_substr`](https://github.com/Welsete/libft/blob/main/ft_substr.c) - Extract a substring from a string.
* [`ft_strtrim`](https://github.com/Welsete/libft/blob/main/ft_strtrim.c) - Trim characters from the beginning and end of a string.
* [`ft_strjoin`](https://github.com/Welsete/libft/blob/main/ft_strjoin.c) - Join two strings into a new one.
* [`ft_split`](https://github.com/Welsete/libft/blob/main/ft_split.c) - Split a string into an array of substrings by a delimiter.
* [`ft_strmapi`](https://github.com/Welsete/libft/blob/main/ft_strmapi.c) - Create a new string by applying a function to each character.
* [`ft_striteri`](https://github.com/Welsete/libft/blob/main/ft_striteri.c) - Apply a function to each character of a string.
* [`ft_putchar_fd`](https://github.com/Welsete/libft/blob/main/ft_putchar_fd.c) - Write a character to a file descriptor.
* [`ft_putstr_fd`](https://github.com/Welsete/libft/blob/main/ft_putstr_fd.c) - Write a string to a file descriptor.
* [`ft_putendl_fd`](https://github.com/Welsete/libft/blob/main/ft_putendl_fd.c) - Write a string followed by a newline to a file descriptor.
* [`ft_putnbr_fd`](https://github.com/Welsete/libft/blob/main/ft_putnbr_fd.c) - Write an integer to a file descriptor.

### Linked list functions *(bonus)*
* [`ft_lstnew`](https://github.com/Welsete/libft/blob/main/ft_lstnew_bonus.c) - Create a new list node.
* [`ft_lstsize`](https://github.com/Welsete/libft/blob/main/ft_lstsize_bonus.c) - Count the number of nodes in a list.
* [`ft_lstlast`](https://github.com/Welsete/libft/blob/main/ft_lstlast_bonus.c) - Return the last node of a list.
* [`ft_lstadd_back`](https://github.com/Welsete/libft/blob/main/ft_lstadd_back_bonus.c) - Add a node to the end of a list.
* [`ft_lstadd_front`](https://github.com/Welsete/libft/blob/main/ft_lstadd_front_bonus.c) - Add a node to the beginning of a list.
* [`ft_lstdelone`](https://github.com/Welsete/libft/blob/main/ft_lstdelone_bonus.c) - Delete a node from a list.
* [`ft_lstclear`](https://github.com/Welsete/libft/blob/main/ft_lstclear_bonus.c) - Delete all nodes from a list.
* [`ft_lstiter`](https://github.com/Welsete/libft/blob/main/ft_lstiter_bonus.c) - Apply a function to each node of a list.
* [`ft_lstmap`](https://github.com/Welsete/libft/blob/main/ft_lstmap_bonus.c) - Apply a function to each node of a list and create a new list.

## Requirements
The library is written in **C** and requires the `gcc` or `clang` compiler, with the standard headers `<stdlib.h>` and `<unistd.h>`.

## Instructions

### 1. Compiling the library

To compile the library, go to its path and run:

For __basic__ functions:
```
$ make
```

For __bonus__ functions:
```
$ make bonus
```

### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

### 3. Using it in your code

To use the library functions in your code, simply include this header:
```
#include "libft.h"
```

## Testing
This library have been tested with [Francinette](https://github.com/xicodomingues/francinette).
