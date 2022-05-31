/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specific.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:30:11 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:30:11 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_f32	ft_vec2f_signed_angle(t_vec2f a, t_vec2f b)
{
	t_f32	s;

	s = ft_sign (a.x * b.y - a.y * b.y);
	return (ft_vec2f_angle (a, b) * s);
}

t_vec2f	ft_vec2f_rotate(t_vec2f v, t_f32 a)
{
	t_f32	c;
	t_f32	s;

	c = cosf (a);
	s = sinf (a);
	return (ft_vec2f (v.x * c - v.y * s, v.x * s + v.y * c));
}

t_vec2f	ft_vec2f_perp_cw(t_vec2f v)
{
	return (ft_vec2f (v.y, -v.x));
}

t_vec2f	ft_vec2f_perp_ccw(t_vec2f v)
{
	return (ft_vec2f (-v.y, v.x));
}
