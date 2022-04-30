CC = cc -lreadline 

NAME = minishell

SRC = minishell.c \
		./src/prompt/get_prompt.c \
		./src/ext_func/ft_strlen.c \
		./src/ext_func/ft_strjoin.c \
		./src/ext_func/ft_strdup.c \
		./src/ext_func/ft_strlen_double.c \
		./src/ext_func/ft_strcpy.c \
		./src/env/get_copy.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
