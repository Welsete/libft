CC = clang
FLAGS = -Wall -Wextra -Werror
SRC = helloworld.c bye.c main.c
OBJ = $(SRC:%.c=%.o)
NAME = libft.a
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all