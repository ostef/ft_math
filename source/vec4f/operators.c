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

t_vec4f	ft_vec4f_add(t_vec4f a, t_vec4f b)
{
	return (ft_vec4f (a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w));
}

t_vec4f	ft_vec4f_sub(t_vec4f a, t_vec4f b)
{
	return (ft_vec4f (a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w));
}

t_vec4f	ft_vec4f_neg(t_vec4f a)
{
	return (ft_vec4f (-a.x, -a.y, -a.z, -a.w));
}

t_vec4f	ft_vec4f_mulf(t_vec4f v, t_f32 s)
{
	return (ft_vec4f (v.x * s, v.y * s, v.z * s, v.w * s));
}

t_vec4f	ft_vec4f_divf(t_vec4f v, t_f32 s)
{
	return (ft_vec4f (v.x / s, v.y / s, v.z / s, v.w / s));
}
