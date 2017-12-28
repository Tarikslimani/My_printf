##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## mf
##

SRC 	=	my_putchar.c		\
		my_strlen.c		\
		my_put_nbr_base.c	\
		flag_d.c		\
		flag_i.c		\
		flag_u.c		\
		flag_o.c		\
		flag_x.c		\
		flag_xmaj.c		\
		flag_c.c		\
		flag_s.c		\
		flag_b.c		\
		flag_p.c		\
		flag_smaj.c		\
		flag_modulo.c		\
		my_printf.c		\
		my_putcharbase.c 	

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f *.o

fclean: 	clean
		rm -f $(NAME)

re:		fclean all
