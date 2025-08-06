CC = clang
FLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:%.c=%.o)
NAME = libft.a
RM = rm -rf
SONAME = libft.so

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(SONAME)

re: fclean all

BONUS_SRC =
BONUS_OBJ = $(BONUS_SRC:.c=.o)

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) -shared -o $(SONAME) $(OBJ) $(BONUS_OBJ)

test: all
	make -C ../libft-unit-test f
	make fclean
