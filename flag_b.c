/*
** EPITECH PROJECT, 2017
** flag_b.c
** File description:
** fb
*/

#include "include/my.h"

int	flag_b(va_list ap)
{
	return (my_put_nbr_base(va_arg(ap, int), "01"));
}
