/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:00:35 by kana              #+#    #+#             */
/*   Updated: 2017/08/04 13:18:34 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);	
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char *str;

	if (!(str = (char*)malloc(sizeof(str) * 0)))
	{
		printf("yo\n");
		return 0;
	}
	str = "Alloah mon frere";
	printf("Sizeof : %zu\n%s", sizeof(str), str);
	return 0;
}
