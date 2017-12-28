/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** mpcb
*/

#include "include/my.h"

int	my_put_nbr_base(unsigned int nb, char *base)
{
	int b = 0;
	int t = 0;

	while (base[b] != '\0')
		b = b + 1;

	if (nb >= b)
		t = t + my_put_nbr_base(nb / b, base);
	t = t + my_putchar_base(nb % b, base);
	
	return (t);
}
