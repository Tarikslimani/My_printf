/*
** EPITECH PROJECT, 2017
** flag_s
** File description:
** fs
*/

#include "include/my.h"

int	my_putstr(char *str)
{
	int i = 0;

	if(str == NULL)
		return (84);
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
	return (i);
}

int	flag_s(va_list ap)
{
	return (my_putstr(va_arg(ap, char *)));
}
