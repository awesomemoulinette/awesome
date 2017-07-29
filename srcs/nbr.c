/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 22:51:44 by kana              #+#    #+#             */
/*   Updated: 2017/07/29 22:58:22 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nbr.h"
#include "str.h"

void	my_putnbr(int nb)
{
	if (nb < 0)
		my_putchar('-');
	nb = ((nb > 0) ? nb : -nb);
	if (nb >= 10)
		my_putnbr(nb / 10);
	my_putchar((nb % 10) + '0');
}

int		ft_is_digit(char c)
{
	return (c > 47 && c < 58);
}

int		ft_res(char *str, int i)
{
	int		res;

	res = 0;
	while (str[i])
	{
		if (ft_is_digit(str[i]) == 1)
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		else
			break ;
	}
	return (res);
}

int		my_atoi(char *str)
{
	long	res;
	int		i;
	int		sign;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	res = ft_res(str, i);
	return (sign * res);
}
