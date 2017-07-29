/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 23:06:24 by kana              #+#    #+#             */
/*   Updated: 2017/07/29 23:39:29 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*my_create_elem(void *data);
void	my_push_back(t_list	**begin_list, void *data);
void	my_push_front(t_list **begin_list, void *data);
int		my_list_size(t_list	*begin);
t_list	*my_list_push_params(int ac, char **av);

#endif
