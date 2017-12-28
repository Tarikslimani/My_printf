/*
** EPITECH PROJECT, 2017
** flag_smaj.c
** File description:
** flagsm
*/

#include "include/my.h"

int	my_putstrhexa(char *str)
{
	int i = 0;
	int total = total + i;
	
	if (str == NULL)
		return (84);
	while (str[i] != '\0') {
		if (str[i] > 32 && str[i] < 127)
			my_putchar(str[i]);
		if (str[i] < 8) {
			my_putstr("\\00");
			my_put_nbr_base((str[i]), "01234567");
		}
		if (str[i] > 8 && str[i] < 32) {
			my_putstr("\\0");
			my_put_nbr_base((str[i]), "01234567");
		}
		i = i + 1;
	}
	return (total);
}

int	flag_smaj(va_list ap)
{
	my_putstrhexa(va_arg(ap, char *));
}

