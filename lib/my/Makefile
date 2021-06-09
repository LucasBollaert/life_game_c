##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c			\
		my_isneg.c			\
		my_put_nbr.c			\
		my_swap.c			\
		my_putstr.c			\
		my_strlen.c			\
		my_sort_int_array.c		\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_is_prime.c			\
		my_find_prime_sup.c		\
		my_strcpy.c			\
		my_strncpy.c			\
		my_revstr.c			\
		my_strstr.c			\
		my_strcmp.c			\
		my_strncmp.c			\
		my_strupcase.c			\
		my_strlowcase.c			\
		my_strcapitalize.c		\
		my_str_isalpha.c		\
		my_str_isnum.c			\
		my_str_islower.c		\
		my_str_isupper.c		\
		my_str_isprintable.c		\
		my_showstr.c			\
		my_showmen.c			\
		my_strcat.c			\
		my_strncat.c			\
		my_str_to_word_array.c		\
		my_getnbr.c			\
		my_no_neg.c			\
		my_itoa.c			\
		my_count_array.c		\
		my_put_array.c			\
		my_memset.c			\
		my_strclen.c			\
		my_strendcpy.c			\
		my_alpha_num.c			\
		my_put_int_array.c		\
		my_line_array.c			\
		my_arr_cpy.c			\

OBJ	=	$(SRC:.c=.o)

NAME 	=	libmy.a

NAME2	=	my.h

CFLAGS	=	-g

all:	$(NAME) copy

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../$(NAME)
	rm -f $(NAME)
copy:
	cp $(NAME) ../
	cp $(NAME2) ../../include
re:     fclean all
