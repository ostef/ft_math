/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:41:03 by soumanso          #+#    #+#             */
/*   Updated: 2022/09/04 13:41:03 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_f32	ft_vec2f_dist(t_vec2f a, t_vec2f b)
{
	return (ft_vec2f_len (ft_vec2f_sub (b, a)));
}

t_f32	ft_vec2f_sqrd_dist(t_vec2f a, t_vec2f b)
{
	return (ft_vec2f_sqrd_len (ft_vec2f_sub (b, a)));
}

t_vec2f	ft_vec2f_lerp(t_vec2f a, t_vec2f b, t_f32 t)
{
	t_vec2f	res;

	res.x = ft_lerp (a.x, b.x, t);
	res.y = ft_lerp (a.y, b.y, t);
	return (res);
}
