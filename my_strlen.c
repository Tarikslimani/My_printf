/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** ms
*/

#include "include/my.h"

int	my_strlen(char const *str)
{
	int b = 0;

	while (str[b] != '\0') {
		b = b + 1;
	}
	return (b);
}
