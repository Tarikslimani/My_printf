/*
** EPITECH PROJECT, 2017
** flagx.c
** File description:
** fxc
*/

#include "include/my.h"

int	flag_x(va_list ap)
{
	return (my_put_nbr_base(va_arg(ap, int), "0123456789abcdef"));
}
