/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 09:41:12 by kana              #+#    #+#             */
/*   Updated: 2017/08/02 11:12:25 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>

t_list	*c_elem(void *data);
void	list_foreach(t_list *head, int (*intcmp)(int, int));
void	print_list(t_list *list);
t_list	*fill_list(void *data_ref);

#endif
