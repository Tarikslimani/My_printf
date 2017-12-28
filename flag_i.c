/*
** EPITECH PROJECT, 2017
** flagi
** File description:
** fi
*/

#include "include/my.h"

int	my_put_nbr (int nb)
{
	int mod = 0;
	int nb_char = 0;

	if (nb <= 9 && nb >= 0) {
		nb_char = nb_char + my_putchar(nb + '0');
	}
	if (nb < 0){
		nb_char = nb_char + my_putchar('-');
		nb = nb * -1;
		if (nb <= 9 && nb >= 0)
			nb_char = nb_char + my_put_nbr(nb);
	}
	if (nb > 9) {
		mod = nb % 10;
		nb_char = nb_char + my_put_nbr(nb /10);
		nb_char = nb_char + my_putchar(mod + '0');
	}
	return (nb_char);
}

int	flag_i(va_list ap)
{
	return (my_put_nbr(va_arg(ap, int)));
}
