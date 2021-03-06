/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:04:31 by kana              #+#    #+#             */
/*   Updated: 2017/08/07 20:41:38 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	*grid(int size)
{
	int		i;
	int		j;
	int		tmp;
	int		*tab;

	tab = malloc(sizeof(tab) * size);
	i = 0;
	j = 0;
	tab[0] = rand() % size;
	i++;
	while (i < size)
	{
		tmp = rand() % size;
		j = 0;
		while (j < i && i < size)
		{
			while (tmp == tab[j])
			{
				printf("tmp before change: %d\t\t", tmp);
				j = 0;
				tmp = rand() % size;
				printf("tmp after change: %d\n", tmp);
			}
			j++;
		}
		j = i - 1;
		tab[i] = tmp;
		printf("\nValue add to tab :\t%d\nAlready in tab :\t%d\n", tab[i], tab[j]);
		while (--j > 0)
			printf("\t\t\t%d\n", tab[j]);
		i++;
		printf("\n---------------------------------\n");
	}
	i = 0;
	printf("\n\n{ %d", tab[0]);
	while (++i < size)
		printf(", %d", tab[i]);
	printf(" }\n");
	return tab;
}

char *str_db(int rand)
{
	char *str[10];
	str[0] = "Je code sous unix et je vous emmerde";
	str[1] = "CeTte #$ string est bizarre ~ non ?";
	str[2] = "Je vais faire des string plus courte apres";
	str[3] = "Enfin j'espere, on verra bien";
	str[4] = "Vingt-huit caracteres celle d'avant quand meme";
	str[5] = "une courte !";
	str[6] = "Va me falloir un coffix la";
	str[7] = "plus c'est long plus c'est bon, tu es sure ?";
	str[8] = "Heureseument que vim peux compter le nombre de caractere de ma string sinon je serais pas dans la merde";
	str[9] = "10 c'est pas mal deja :)";
	return (str[rand]);
}

int main(int ac, char *av[])
{
	int size = atoi(av[1]);
	if (ac != 2)
		size = 10;
	srand(time(NULL));
	grid(size);
	return 0;
}
