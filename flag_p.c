/*
** EPITECH PROJECT, 2017
** flag_p.c
** File description:
** fp
*/

#include "include/my.h"

int	my_putadresse(long int nb)
{
	char *base = "0123456789abcdef";
	int b = 0;
	int t = 2;

	while (base[b] != '\0')
		b = b + 1;

	if (nb > b)
		my_putadresse(nb / b);
	t = t + my_putchar_base(nb % b, base);

	return (t);
}

int	flag_p(va_list ap)
{
	my_putchar('0');
	my_putchar('x');
	return (my_putadresse(va_arg(ap, long int)));
}
