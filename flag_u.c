/*
** EPITECH PROJECT, 2017
** flagu
** File description:
** fu
*/

#include "include/my.h"

int	my_put_nbrunisd(unsigned int nb)
{
	int nb_char = -1;

	if(nb >= 0 && nb < 10)
		nb_char = nb_char + my_putchar(nb + 48);
	if(nb > 9) {
		nb_char = nb_char + my_put_nbr(nb / 10);
		nb_char = nb_char + my_put_nbr(nb % 10);
	}
	return (nb_char);
}

int	flag_u(va_list ap)
{
	return (my_put_nbrunisd(va_arg(ap, unsigned int)));
}
