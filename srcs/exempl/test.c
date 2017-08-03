/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:04:31 by kana              #+#    #+#             */
/*   Updated: 2017/08/03 19:34:16 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	rnd(int *rand)
{
	srand(time(NULL));
	int r = rand() % 10;
	return r;
}

int *grid(int rnd)
{
	int *grid;
	int i = 0;
	
	if (!(grid = (int)malloc(sizeof(grid) * 10)))
		 return 0;
	while (i < 10)
	{
		if (rnd() != grid[j])
			

	}
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
	int rand[10] = 
	printf("%s", str_db());
	return 0;
}
