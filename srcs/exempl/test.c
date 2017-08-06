/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:04:31 by kana              #+#    #+#             */
/*   Updated: 2017/08/06 15:12:57 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
int *grid()
{
	int		*grid;
	int tmp;
	int i = 0;
	int j;
	int success = 0;

	grid = malloc(sizeof(grid) * 10);
	do
	{
		success = 1;
		tmp = rand() % 10;
		j = 0;
		do	
		{
			if (tmp == grid[j])
				success = 0;
			j++;
		} while (j <= i);
		grid[i] = tmp;
		i++;
	} while (i < 10);
	return grid;
}

   int	*grid()
   {
   int		i;
   int		j;
   int		var;
   int		*ret;

   ret = malloc(sizeof(ret) * 10);
   i = 0;
   j = 0;
   ret[0] = 0;
   i++;
   while (i < 10)
   {
   var = rand() % 10;
   while (j <= i && i <= 9)
   {
   if (var == ret[j])
   {
   printf("i:%d\nj:%d\nold var: %d\tret: %d\n", i, j, var, ret[j]);
   var = rand() % 10;
   printf("new var: %d\n", var);
   }
   j++;
   }
   j = 0;
   ret[i] = var;
   printf("Value add to tab : %d\n", ret[i]);
   i++;
   printf("\n---------------------------------\n");
   }
   return ret;
   }*/


int		*grid(void)
{
	int		i = 0, j;
	int		*tab = malloc(sizeof(int) * 10);
	int		tmp = 0, diff = 0;

	do
	{
		j = 0;
		tmp = rand() % 10;
		do
		{
			if (tmp == tab[j])
				diff = 1;
			j++;
		} while (j < i);
		tab[i] = tmp;
		i++;
	} while (i < 10);
	printf("{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}", 
			tab[0], tab[1], tab[2], tab[3], tab[4], 
			tab[5], tab[6], tab[7], tab[8], tab[9]);
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

int main(void)
{
	srand(time(NULL));
	int i = -1;
	int *rand = grid(); 

	return 0;
}
