/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 22:47:56 by kana              #+#    #+#             */
/*   Updated: 2017/07/30 23:29:19 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_H
#define INC_H

#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
#define NC "\x1B[0m"
#define GRN "\x1B[31m"

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int nb);
void	ft_putnbr(int nb);
int		my_atoi(char *str);
struct s_int_render	*my_int_to_tab(int ac, char **av, int (f*)(int)(int));
void	my_show_tab(struct	s_int_render *exo);

#endif
