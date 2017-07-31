/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:44:23 by kana              #+#    #+#             */
/*   Updated: 2017/07/31 14:31:08 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struc.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*my_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 1;
	while (src[i])
		i++;
	if (!(dst = (char*)malloc(sizeof(dst) * (i + 1))))
		return NULL;
	while (*src)
		*dst++; = *src++;
	*dst++ = '\0';
	return dst;
}

int		my_scmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return 0;
		*s1++;
		*s2++;
	}
	return 1;
}

void	print_str(struct p_to_tab, char *data)
{
	t_to_tab	p1;
	p1.out = data;
	p1.src = ft_strdup(data);
	p1.dst = my_strdup(data);
	p1.scmp = my_scmp(ft_strdup(data), my_strdup(data));
	if (p1.scmp)
		printf("\t\t%s\t\t||\t\t%s\t\t||\t\t%s", 
				data, ft_strdup(data), my_strdup(data));
	else
		printf("ERROR !!");
}
