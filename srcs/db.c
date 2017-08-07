/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 21:51:37 by kana              #+#    #+#             */
/*   Updated: 2017/08/07 23:29:08 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

char	*nb_u_db(int rand)
{
	char	*nb[20];
	nb[0] = "32134";
	nb[1] = "31231267";
	nb[2] = "3";
	nb[3] = "934";
	nb[4] = "0";
	nb[5] = "439";
	nb[6] = "123123";
	nb[7] = "2147483647";
	nb[8] = "2147483646";
	nb[9] = "2147483649";
	nb[10] = "65";
	nb[11] = "1234";
	nb[12] = "93821321";
	nb[13] = "831233214";
	nb[14] = "721231234";
	nb[15] = "121791234";
	nb[16] = "1";
	nb[17] = "786234234";
	nb[18] = "7531234";
	nb[19] = "9";
	return nb[rand];
}

char	*nb_db(int rand)
{
	char	*nb[20];
	nb[0] = "32134";
	nb[1] = "-31231267";
	nb[2] = "3";
	nb[3] = "934";
	nb[4] = "0";
	nb[5] = "439";
	nb[6] = "123123";
	nb[7] = "-2147483647";
	nb[8] = "-2147483646";
	nb[9] = "-2147483649";
	nb[10] = "65";
	nb[11] = "1234";
	nb[12] = "93821321";
	nb[13] = "831233214";
	nb[14] = "721231234";
	nb[15] = "121791234";
	nb[16] = "1";
	nb[17] = "2147483647";
	nb[18] = "2147483646";
	nb[19] = "2147483649";
	return nb[rand];
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
