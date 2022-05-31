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

t_vec3f	ft_vec3f_add(t_vec3f a, t_vec3f b)
{
	return (ft_vec3f (a.x + b.x, a.y + b.y, a.z + b.z));
}

t_vec3f	ft_vec3f_sub(t_vec3f a, t_vec3f b)
{
	return (ft_vec3f (a.x - b.x, a.y - b.y, a.z - b.z));
}

t_vec3f	ft_vec3f_neg(t_vec3f a)
{
	return (ft_vec3f (-a.x, -a.y, -a.z));
}

t_vec3f	ft_vec3f_mulf(t_vec3f v, t_f32 s)
{
	return (ft_vec3f (v.x * s, v.y * s, v.z * s));
}

t_vec3f	ft_vec3f_divf(t_vec3f v, t_f32 s)
{
	return (ft_vec3f (v.x / s, v.y / s, v.z / s));
}
