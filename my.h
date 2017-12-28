
/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	my_printf(char const *str, ...);
int	my_putchar(char c);
int	suite(char const *str, int i, va_list ap);
int	my_putstr(char *str);
int	my_putadresse(long int nb);
int	my_put_nbr(int i);
int	my_putchar_base(int i, char *base);
int	my_put_nbr_base(unsigned int i, char *base);
int	my_strlen(char const *str);
int	flag_d(va_list ap);
int	checkflag(char c);
int	checkspecial(char c);
int	my_tab(int i, va_list ap);
int	flag_i(va_list ap);
int	flag_u(va_list ap);
int	flag_o(va_list ap);
int	flag_x(va_list ap);
int	flag_xmaj(va_list ap);
int	flag_c(va_list ap);
int	flag_s(va_list ap);
int	flag_b(va_list ap);
int	flag_p(va_list ap);
int	flag_smaj(va_list ap);
int	flag_modulo(va_list ap);

#endif /*MY_H_*/
