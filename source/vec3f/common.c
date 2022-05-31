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

t_f32	ft_vec3f_dot(t_vec3f a, t_vec3f b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

t_f32	ft_vec3f_len(t_vec3f v)
{
	return (sqrtf (v.x * v.x + v.y * v.y + v.z * v.z));
}

t_vec3f	ft_vec3f_normalized_or(t_vec3f v, t_vec3f fallback)
{
	if (ft_vec3f_approx_zero (v, 0.00001f))
		return (fallback);
	return (ft_vec3f_divf (v, ft_vec3f_len (v)));
}

t_vec3f	ft_vec3f_normalized(t_vec3f v)
{
	return (ft_vec3f_normalized_or (v, ft_vec3f (0, 0, 0)));
}
