/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 19:40:06 by kana              #+#    #+#             */
/*   Updated: 2017/07/30 20:25:45 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	my_putchar(char c);

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		my_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		my_putchar(n + 48);

}
