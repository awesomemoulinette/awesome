/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:50:00 by kana              #+#    #+#             */
/*   Updated: 2017/07/31 14:21:17 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUC_H
#define STRUC_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	my_putstr(char *str);
int		scmp(char *s1, char *s2)
int		check_for_print(void *data);

typedef struct	p_to_tab(void *data)
{
	char	*out;
	char	*src;
	char	*dst;
	int		scmp;
}				t_to_tab;


#endif
