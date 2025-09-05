<h1 align="center">
  <img alt="Libft" width="20%" height="20%" src="https://github.com/Welsete/libft/blob/main/badges/libft_b.png" />
</h1>

> 42 São Paulo – School Project  

Este repositório contém todos os arquivos do projeto **libft** no **42SP Common Core**.  
É uma biblioteca personalizada de funções úteis em **C**, incluindo o `Makefile` e o `libft.h`.

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

Este projeto é uma **biblioteca em C** com funções úteis que podem ser reutilizadas em futuros projetos do currículo da **42 School**.  
O objetivo é reimplementar funções padrão para entender profundamente seu funcionamento, além de construir uma base sólida para projetos seguintes.  

O código segue as regras da [Norminette](https://github.com/42School/norminette).

## Grade
<img alt="Libft" width="15%" height="15%" src="https://github.com/Welsete/libft/blob/main/badges/grademe.png" />

## Index

### Funções da `<ctype.h>`
* [`ft_isascii`](https://github.com/Welsete/libft/blob/main/ft_isascii.c)
* [`ft_isalpha`](https://github.com/Welsete/libft/blob/main/ft_isalpha.c)
* [`ft_isdigit`](https://github.com/Welsete/libft/blob/main/ft_isdigit.c)
* [`ft_isalnum`](https://github.com/Welsete/libft/blob/main/ft_isalnum.c)
* [`ft_isprint`](https://github.com/Welsete/libft/blob/main/ft_isprint.c)
* [`ft_tolower`](https://github.com/Welsete/libft/blob/main/ft_tolower.c)
* [`ft_toupper`](https://github.com/Welsete/libft/blob/main/ft_toupper.c)

### Funções da `<stdlib.h>`
* [`ft_atoi`](https://github.com/Welsete/libft/blob/main/ft_atoi.c)
* [`ft_calloc`](https://github.com/Welsete/libft/blob/main/ft_calloc.c)

### Funções da `<strings.h>`
* [`ft_bzero`](https://github.com/Welsete/libft/blob/main/ft_bzero.c)
* [`ft_memset`](https://github.com/Welsete/libft/blob/main/ft_memset.c)
* [`ft_memchr`](https://github.com/Welsete/libft/blob/main/ft_memchr.c)
* [`ft_memcmp`](https://github.com/Welsete/libft/blob/main/ft_memcmp.c)
* [`ft_memmove`](https://github.com/Welsete/libft/blob/main/ft_memmove.c)
* [`ft_memcpy`](https://github.com/Welsete/libft/blob/main/ft_memcpy.c)

### Funções da `<string.h>`
* [`ft_strlen`](https://github.com/Welsete/libft/blob/main/ft_strlen.c)
* [`ft_strchr`](https://github.com/Welsete/libft/blob/main/ft_strchr.c)
* [`ft_strrchr`](https://github.com/Welsete/libft/blob/main/ft_strrchr.c)
* [`ft_strnstr`](https://github.com/Welsete/libft/blob/main/ft_strnstr.c)
* [`ft_strncmp`](https://github.com/Welsete/libft/blob/main/ft_strncmp.c)
* [`ft_strdup`](https://github.com/Welsete/libft/blob/main/ft_strdup.c)
* [`ft_strlcpy`](https://github.com/Welsete/libft/blob/main/ft_strlcpy.c)
* [`ft_strlcat`](https://github.com/Welsete/libft/blob/main/ft_strlcat.c)

### Funções extras
* [`ft_itoa`](https://github.com/Welsete/libft/blob/main/ft_itoa.c)
* [`ft_substr`](https://github.com/Welsete/libft/blob/main/ft_substr.c)
* [`ft_strtrim`](https://github.com/Welsete/libft/blob/main/ft_strtrim.c)
* [`ft_strjoin`](https://github.com/Welsete/libft/blob/main/ft_strjoin.c)
* [`ft_split`](https://github.com/Welsete/libft/blob/main/ft_split.c)
* [`ft_strmapi`](https://github.com/Welsete/libft/blob/main/ft_strmapi.c)
* [`ft_striteri`](https://github.com/Welsete/libft/blob/main/ft_striteri.c)
* [`ft_putchar_fd`](https://github.com/Welsete/libft/blob/main/ft_putchar_fd.c)
* [`ft_putstr_fd`](https://github.com/Welsete/libft/blob/main/ft_putstr_fd.c)
* [`ft_putendl_fd`](https://github.com/Welsete/libft/blob/main/ft_putendl_fd.c)
* [`ft_putnbr_fd`](https://github.com/Welsete/libft/blob/main/ft_putnbr_fd.c)

### Funções de listas encadeadas *(bonus)*
* [`ft_lstnew`](https://github.com/Welsete/libft/blob/main/ft_lstnew_bonus.c)
* [`ft_lstsize`](https://github.com/Welsete/libft/blob/main/ft_lstsize_bonus.c)
* [`ft_lstlast`](https://github.com/Welsete/libft/blob/main/ft_lstlast_bonus.c)
* [`ft_lstadd_back`](https://github.com/Welsete/libft/blob/main/ft_lstadd_back_bonus.c)
* [`ft_lstadd_front`](https://github.com/Welsete/libft/blob/main/ft_lstadd_front_bonus.c)
* [`ft_lstdelone`](https://github.com/Welsete/libft/blob/main/ft_lstdelone_bonus.c)
* [`ft_lstclear`](https://github.com/Welsete/libft/blob/main/ft_lstclear_bonus.c)
* [`ft_lstiter`](https://github.com/Welsete/libft/blob/main/ft_lstiter_bonus.c)
* [`ft_lstmap`](https://github.com/Welsete/libft/blob/main/ft_lstmap_bonus.c)

## Requirements
A biblioteca é escrita em **C** e precisa do compilador `gcc` ou `clang`, além das bibliotecas padrão `<stdlib.h>` e `<unistd.h>`.

## Instructions

### 1. Compilar a biblioteca

Para compilar as funções **básicas**:
```sh
make
