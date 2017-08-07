/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_db.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:44:26 by kana              #+#    #+#             */
/*   Updated: 2017/08/07 21:33:33 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	*grid(unsigned int size)
{
	unsigned int	i, j;
	int				tmp;
	int				*tab;

	if (!( tab = (int*)malloc(sizeof(tab) * size)))
		return 0;
	i = 0;
	j = 0;
	tab[0] = rand() % size;
	while (++i < size)
	{
		tmp = rand() % size;
		j = 0;
		while (j < i && i < size)
		{
			while (tmp == tab[j])
			{
				j = 0;
				tmp = rand() % size;
			}
			j++;
		}
		tab[i] = tmp;
	}
	return tab;
}

char *str_db(int rand)
{
	char *str[22];
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
	str[10] = "90dZP8qyLVtK";
	str[11] = "up6sU8Z";
	str[12] = "NVUTefk8gH";
	str[13] = "FxCLbg9u24E";
	str[14] = "ba9";
	str[15] = "VfoAup6sU8Z";
	str[16] = "o";
	str[17] = "LkXmr";
	str[18] = "Quelle est la mamie qui fait peur ? Mamie Traillette.";
	str[19] = "Quand est-ce que windows ne plante pas ?\nQuand l'ordinateur est eteint";
	str[20] = "Que dit une mère à son fils geek quand le diner est servi ?\nAlt Tab !!!";
	str[21] = "Un geek ne descend pas du métro. Il libère la RAM...";
	return (str[rand]);
}

int main()
{
	srand(time(NULL));
	unsigned int i = -1;
	int *rand = grid(22);
	while (++i < 10)
		printf("test %d:\n%s\n\n", i, str_db(rand[i]));
	return 0;
}
