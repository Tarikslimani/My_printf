/*
** EPITECH PROJECT, 2017
** flag_c.c
** File description:
** fcc
*/

#include "include/my.h"

int	flag_c(va_list ap)
{
	return (my_putchar(va_arg(ap, int)));
}
