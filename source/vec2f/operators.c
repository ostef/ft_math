/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:37:02 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:37:02 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec2f	ft_vec2f_add(t_vec2f a, t_vec2f b)
{
	return (ft_vec2f (a.x + b.x, a.y + b.y));
}

t_vec2f	ft_vec2f_sub(t_vec2f a, t_vec2f b)
{
	return (ft_vec2f (a.x - b.x, a.y - b.y));
}

t_vec2f	ft_vec2f_neg(t_vec2f a)
{
	return (ft_vec2f (-a.x, -a.y));
}

t_vec2f	ft_vec2f_mulf(t_vec2f v, t_f32 s)
{
	return (ft_vec2f (v.x * s, v.y * s));
}

t_vec2f	ft_vec2f_divf(t_vec2f v, t_f32 s)
{
	return (ft_vec2f (v.x / s, v.y / s));
}
