/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:04:31 by kana              #+#    #+#             */
/*   Updated: 2017/08/03 21:18:04 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	rnd(void)
{
	return (rand() % 10);
}

int *grid()
{
	int *grid;
	int i = 1;
	int j = 0;
//	int k = i;
	
	if (!(grid = (int*)malloc(sizeof(grid) * 10)))
		 return 0;
	grid[0] = rnd();
	while (i < 10)
	{
		j = 0;
		while (j < 10)
			j++;
		if (i != )
		{
			grid[i] = rnd();
		}
		i++;
	}
	return grid;
}

char *str_db(int rand)
{
	char *str[10];
	str[0] = "Je code sous unix et je vous emmerde";
	str[1] = "CeTte #$ string est bizarre ~ non ?";
	str[2] = "Je vais faire des string plus courte apres";
	str[3] = "Enfin j'espere, on verra bien";
	str[4] = "Vingt-hui caracteres celle d'avant quand meme";
	str[5] = "une courte !";
	str[6] = "Va me falloir un coffix la";
	str[7] = "plus c'est long plus c'est bon, tu es sure ?";
	str[8] = "Heureseument que vim peux compter le nombre de caractere de ma string sinon je serais pas dans la merde";
	str[9] = "10 c'est pas mal deja :)";
	return (str[rand]);
}

int main(void)
{
	srand(time(NULL));
	int *rand = grid(); 
//	int rnd = rand[0];
//	printf("%s", str_db(rnd));

	int i = -1;
	while (++i < 10)
		printf("%d, ", rand[i]);
	return 0;
}
