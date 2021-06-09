##
## EPITECH PROJECT, 2020
## my_sokoban
## File description:
## main of the project
##

CC	=	gcc

RM	=	rm -f

SRC	=	main.c		\
		technics.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -g

CFLAGS2	=	-lncurses

LDFLAGS =	-L./lib -lmy

NAME	=	life

all:	$(NAME)

$(NAME):	$(OBJ)
		@make -C lib/my
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS) $(CFLAGS2)

clean:
	@make -C lib/my clean
	@rm -f $(OBJ)
	$(RM) $(OBJ)

fclean:	clean
	@make -C lib/my fclean
	$(RM) $(NAME)

re: fclean all
