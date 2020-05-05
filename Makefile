NAME	= libft.a
SRC	= ft_*.c
OBJ	= $(SRC:.c=.o)
BONUS_SRC	= 
BONUS_OBJ	= $(BONUS_SRC:.c=.o)
HEADERS	= libft.h
CFLAGS	= -Wall -Wextra -Werror
RM	= @/bin/rm -f


all: $(NAME)

$(NAME):
	@echo "\nCompilando..."
	@echo "Por favor, aguarde.\n"
	gcc $(CFLAGS) -I $(HEADERS) -c $(SRC)
	@echo "\n"
	ar -rc $(NAME) $(OBJ)
	@echo "\n"
	ranlib $(NAME)
	@echo "\n"
	@echo "\n$(NAME) foi gerado!"

bonus: all

	#gcc $(CFLAGS) -I $(HEADERS) -c $(BONUS_SRC)
	#ar rc $(NAME) $(BONUS_SRC)
	#ranlib $(NAME)

run:
	./$(NAME)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)
		@echo "\nArquivos objetos removidos!\n"

fclean:	clean
	$(RM) $(NAME)
	@echo "\n$(NAME) removido!\n"

re: fclean all

.PHONY : run clean fclean re