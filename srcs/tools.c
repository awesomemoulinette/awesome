/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 22:51:44 by kana              #+#    #+#             */
/*   Updated: 2017/07/31 10:53:55 by kana             ###   ########.fr       */
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
	if (n = nb)
		return 1;
	return 0;
}

struct s_int_render	*my_int_to_tab(int ac, char **av, int (*icmp)(int, int))
{
	t_int_render	*exo;
	int				i;
	int				j;

	if (!(exo = malloc(sizeof(t_int_render) * (ac))))
		return NULL;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		exo[i].out = av[i];
		exo[i].srcs = my_atoi(av[i]);
		exo[i].receip = ft_atoi(av[i]);
		exo[i].cmp = icmp(my_atoi(av[i]), ft_atoi(av[i]));
		i++;
	}
	
	return exo;
}

void	my_show_tab(struct s_int_render *exo)
{
	while (exo)
	{
		if (exo.cmp)
			printf("\t\t%d\t\t||\t\t"GRN"%d"NC"\t\t||\t\t"NC"%d"GRN"\t\t", exo.out, exo.receip, exo.srcs);
		else	
			printf("\t\t%d\t\t||\t\t"GRN"%d"NC"\t\t||\t\t"NC"%d"GRN"\t\t", exo.out, exo.receip, exo.srcs);
	}
}








