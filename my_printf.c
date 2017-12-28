/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** mpc
*/

#include "include/my.h"

int	checkspecial(char c)
{
	char flag[51] = " #-+'aefghjklmnqrtvwyzAEFGHJKLMNQRTVWYZ0123456789\0";
	int i = 0;

	while (flag[i] != '\0') {
		if (c == flag[i])
			return (1);
		i = i + 1;
	}
	return (-1);
}

int	checkflag(char c)
{
	char flag[13] = "diuoxXcsb%pS\0";
	int i = 0;

	while (flag[i] != '\0') {
		if (c == flag[i])
			return (i);
		i = i + 1;
	}
	return (-1);
}

int	my_tab(int i, va_list ap)
{
	int	(*tab[13])(va_list);

	tab[0] = &flag_d;
	tab[1] = &flag_i;
	tab[2] = &flag_u;
	tab[3] = &flag_o;
	tab[4] = &flag_x;
	tab[5] = &flag_xmaj;
	tab[6] = &flag_c;
	tab[7] = &flag_s;
	tab[8] = &flag_b;
	tab[9] = &flag_modulo;
	tab[10] = &flag_p;
	tab[11] = &flag_smaj;
	tab[12] = NULL;
	return ((*tab[i])(ap));
}

int	my_printf(char const *str, ...)
{
	va_list ap;
	int i = 0;
	int t = 0;

	va_start(ap, str);
	while (str[i] != '\0') {
		if (str[i] == '%') {
			i = suite(str, i, ap);
		}
		else {
			t = t + my_putchar(str[i]);
		}
		i = i + 1;
	}
	va_end(ap);
	return (t);
}

int	suite(char const *str, int i, va_list ap)
{
	int b = 0;

	b = i;
	if (checkspecial(str[i + 1]) == 1) {
		while (checkspecial(str[b + 1]) == 1) {
			b = b + 1;
		}
	}
	if (checkflag(str[b + 1]) != -1) {
		my_tab(checkflag(str[b + 1]), ap);
		i = b + 1;
	}
	if (checkflag(str[b + 1]) == -1) {
		my_putchar('%');
		i = i + 1;
	}
	b = b + 1;

	return (i);
}
