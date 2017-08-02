/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:44:23 by kana              #+#    #+#             */
/*   Updated: 2017/08/02 11:24:59 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struc.h"
#include "list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		my_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
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

char *str_db(void)
{
	int i = 0;
	int r = rand() % 20;
	char **str;
	str[0][37] = "Je code sous unix et je vous emmerde";
	str[1][36] = "CeTte #$ string est bizarre ~ non ?";
	str[2][43] = "Je vais faire des string plus courte apres";
	str[3][28] = "eFin j'espere, on verra bien";
	str[4][46] = "Vingt-hui caracteres celle d'avant quand meme";
	str[5][13] = "une courte !";
	str[6][28] = "Va me falloir un coffix la";
	str[7][45] = "plus c'est long plus c'est bon, tu es sure ?";
	str[8][104] = "Heureseument que vim peux compter le nombre de caractere de ma string sinon je serais pas dans la merde";
	str[9][25] = "10 c'est pas mal deja :)";
	return (str[r]);
}

void	print_list(t_list *list, void *data_ref)
{
	while (list)
	{
		if (list->res)
			printf("\t%d\t||\t%d\t||\t%d\n", (int)data_ref, (int)list->src, (int)list->dst);
		else
			printf("ERROR !");
		list = list->next
	}
}

t_list	*c_elem(void *data)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(new))))
		return 0;
	new->data = data;
	new->next = NULL;
	return new;
}

int		intcmp(int i, int j)
{
	if (i != j)
		return 0;
	return 1;
}

void	list_foreach(t_list *head, int (*intcmp)(int, int))
{
	t_list	*current;

	current = head;
	while (current)
	{
		current->res = intcmp((int)current->src, (int)current->dst);
		current = current->next;
	}
}

t_list	*fill_list(void	*data_ref);
{
	t_list	*list;

	while (list)
	{
		list = c_elem(data_ref);
		list->out = (char *)data_ref;
		list->src = (int)ft_strlen(data_ref);
		list->dst = (int)my_strlen(data_ref);
		list->res = intcmp(list->src, list->dst);
	}
	return (list);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	print_list(fill_list(str_db()), str_db());
	return 0;
}
