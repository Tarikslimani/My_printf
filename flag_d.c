/*
** EPITECH PROJECT, 2017
** flag_d.c
** File description:
** fdc
*/

#include "include/my.h"

int	flag_d(va_list ap)
{
	return (my_put_nbr(va_arg(ap, int)));
}
