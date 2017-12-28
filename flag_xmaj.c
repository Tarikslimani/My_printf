/*
** EPITECH PROJECT, 2017
** flagxmaj.c
** File description:
** fxm
*/

#include "include/my.h"

int	flag_xmaj(va_list ap)
{
	return (my_put_nbr_base(va_arg(ap, int), "0123456789ABCDEF"));
}
