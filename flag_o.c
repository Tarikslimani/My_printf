/*
** EPITECH PROJECT, 2017
** flag_o.c
** File description:
** fo
*/

#include "include/my.h"

int	flag_o(va_list ap)
{
	return (my_put_nbr_base(va_arg(ap, int), "01234567"));
}
