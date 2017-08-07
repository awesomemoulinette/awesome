/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 22:47:56 by kana              #+#    #+#             */
/*   Updated: 2017/08/07 22:09:32 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_H
#define INC_H

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NC "\x1B[0m"
#define GRN "\x1B[31m"

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int nb);
void	ft_putnbr(int nb);
int		my_atoi(char *str);
char*	nb_u_db(int rand);
char*	nb_db_(int rand);
char*	str_db(int rand);
int*	grid(unsigned int size);
void	show_result(char* grid);

#endif
