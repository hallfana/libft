SRC = *.c
NAME = libft.a
OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Werror -Wextra

all : $(NAME)
	@true

$(NAME) :
	gcc -I $(FLAGS) -c $(FLAGS) $(SRC)
	ar -rcs $(NAME) $(OBJ)

clean :
	rm -f $(NAME)

fclean : clean
	rm -rf $(OBJ)

dev:
	make fclean;git add .; git commit -m 'auto update';git push;cd ../libft-unit-test; make f;cd ../libft

re : fclean all

.PHONY : all clean fclean re mclean dev
