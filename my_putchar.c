/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** mpc
*/

#include "include/my.h"

int	my_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}
