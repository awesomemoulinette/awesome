/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:50:00 by kana              #+#    #+#             */
/*   Updated: 2017/08/02 09:58:31 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUC_H
#define STRUC_H

#include "list.h"

typedef struct	s_list
{
	void	*out;
	void	*src;
	void	*dst;
	int		res;
}				t_list;

#endif
