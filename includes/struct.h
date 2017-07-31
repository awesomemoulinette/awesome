/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 21:48:33 by kana              #+#    #+#             */
/*   Updated: 2017/07/31 10:36:16 by kana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
#define STRUCT_H

typedef struct *s_int_render
{
	int		out;
	int		srcs;
	int		receip;
	int		(*cmp)(int, int);
}				*t_int_render;

#endif
