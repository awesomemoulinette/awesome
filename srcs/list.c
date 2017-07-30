/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 23:00:06 by kana              #+#    #+#             */
/*   Updated: 2017/07/30 00:34:29 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str.h"

void	my_print_list(t_list *list)
{
	int	i;	

	i = 0;
	while (list)
	{
		printf("%p : %s : next=%p\n", list, (char *)list->data, list->next);
		list = list->next;
	}
}
	
t_list	*my_create_elem(void *data)
{
	t_list	*current;

	if (!(current = (t_list*)malloc(sizeof(current))))
		return 0;
	current->data = data;
	current->next = NULL;
	return current;
}

void	my_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	current = *begin_list;
	if (current)
	{
		while (current)
			current = current->next;
		current = my_create_elem(data);
	}
	else
		current = my_create_elem(data);
}

void	my_list_push_front(t_list **begin_list, void *data)
{
	t_list	*head;

	head = my_create_elem(data);
	head->next = *begin_list;
	*begin_list = head;
}

int		my_list_size(t_list	*begin_list)
{
	t_list	*current;
	int i;

	current = begin_list;
	i = 0;
	while (current)
	{
		i++;
		current = current->next;
	}
	return i;
}

t_list	*my_list_last(t_list *begin_list)
{
	t_list *current;

	current = begin_list;
	while (current->next)
		current = current->next;
	return current;
}

t_list	*my_list_push_params(int ac, char **av)
{
	t_list	*last;
	t_list	*swp;
	int	i;

	i = 0;
	last = NULL;
	while (i < ac)
	{
		swp = my_create_elem(av[i]);
		swp->next = last;
		last = swp;
		i++;
	}
	return last;
}
