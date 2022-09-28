/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:22:24 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:22:24 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_f32	ft_vec4f_dot(t_vec4f a, t_vec4f b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w);
}

t_f32	ft_vec4f_len(t_vec4f v)
{
	return (sqrtf (v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w));
}

t_vec4f	ft_vec4f_normalized_or(t_vec4f v, t_vec4f fallback)
{
	if (ft_vec4f_approx_zero (v, 0.00001f))
		return (fallback);
	return (ft_vec4f_divf (v, ft_vec4f_len (v)));
}

t_vec4f	ft_vec4f_normalized(t_vec4f v)
{
	return (ft_vec4f_normalized_or (v, ft_vec4f (0, 0, 0, 0)));
}

t_vec4f	ft_vec4f_lerp(t_vec4f a, t_vec4f b, t_f32 t)
{
	t_vec4f	res;

	res.x = ft_lerp (a.x, b.x, t);
	res.y = ft_lerp (a.y, b.y, t);
	res.z = ft_lerp (a.z, b.z, t);
	res.w = ft_lerp (a.w, b.w, t);
	return (res);
}
