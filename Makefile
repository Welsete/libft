# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wtavares <wtavares@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/04 16:24:03 by wtavares          #+#    #+#              #
#    Updated: 2025/09/04 16:55:30 by wtavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = clang
CFLAGS  = -Wall -Wextra -Werror

AR      = ar
ARFLAGS = rcs

NAME    = libft.a
LIB     = libft.h

SRCS =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c \
        ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
        ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
        ft_strlen.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
        ft_memchr.c ft_memcpy.c ft_memset.c ft_memmove.c \
        ft_memcmp.c ft_tolower.c ft_toupper.c ft_substr.c \
        ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
        ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c \
        ft_putnbr_fd.c ft_putstr_fd.c

OBJS = $(SRCS:.c=.o)

BONUSSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
            ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
            ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUSOBJS = $(BONUSSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c $(LIB)
	$(CC) $(CFLAGS) -I. -c $< -o $@

bonus: $(NAME) $(BONUSOBJS)
	$(AR) $(ARFLAGS) $(NAME) $(BONUSOBJS)

clean:
	rm -f $(OBJS) $(BONUSOBJS)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all

rebonus: fclean all bonus

.PHONY: all clean fclean re bonus rebonus
