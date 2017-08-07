/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:04:31 by kana              #+#    #+#             */
/*   Updated: 2017/08/07 20:30:10 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	*grid()
{
	int		i;
	int		j;
	int		var;
	int		*ret;

	ret = malloc(sizeof(ret) * 10);
	i = 0;
	j = 0;
	ret[0] = rand() % 10;
	i++;
	while (i < 10)
	{
		var = rand() % 10;
		j = 0;
		while (j < i && i <= 10)
		{
			while (var == ret[j])
			{
				printf("var before change: %d\t\t", var);
				j = 0;
				var = rand() % 10;
				printf("var after change: %d\n", var);
			}
			j++;
		}
		j = i - 1;
		ret[i] = var;
		printf("\nValue add to tab :\t%d\nAlready in tab :\t%d\n", ret[i], ret[j]);
		while (--j > 0)
			printf("\t\t\t%d\n", ret[j]);
		i++;
		printf("\n---------------------------------\n");
	}
	i = 0;
	printf("\n{ %d", ret[0]);
	while (++i < 10)
		printf(", %d", ret[i]);
	printf(" }\n");
	return ret;
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
	grid(); 
	return 0;
}
