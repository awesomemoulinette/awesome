/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 22:51:44 by kana              #+#    #+#             */
/*   Updated: 2017/08/07 22:06:13 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"
#include "struct.h"
#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
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
	return c > 47 && c < 58;
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
	return res;
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
	return sign * res;
}

int		icmp(int n, int nb)
{
	if (n == nb)
		return 1;
	return 0;
}

int	*grid(unsigned int size)
{
	unsigned int	i, j;
	int				tmp;
	int				*tab;

	if (!( tab = (int*)malloc(sizeof(tab) * size)))
		return 0;
	i = 0;
	j = 0;
	tab[0] = rand() % size;
	while (++i < size)
	{
		tmp = rand() % size;
		j = 0;
		while (j < i && i < size)
		{
			while (tmp == tab[j])
			{
				j = 0;
				tmp = rand() % size;
			}
			j++;
		}
		tab[i] = tmp;
	}
	return tab;
}

void	show_result(char *grid)
{
	srand(time(NULL));
	unsigned int i = -1;
	int* rand = grid(22);
	while (++i < 10)
		printf("test %d:\n%s\n\n", i, str_db(rand[i]));
}
