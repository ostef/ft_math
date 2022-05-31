/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:22:44 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:22:44 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_f32	ft_vec4f_angle(t_vec4f a, t_vec4f b)
{
	t_f32	denom;
	t_f32	d;

	denom = sqrtf (ft_vec4f_dot (a, a) * ft_vec4f_dot (b, b));
	if (ft_approx_zero (denom, 0.00001f))
		return (0);
	d = ft_clampf (ft_vec4f_dot (a, b) / denom, -1, 1);
	return (acosf (d));
}

t_vec4f	ft_vec4f_reflect(t_vec4f incident, t_vec4f normal)
{
	t_f32	d;

	d = ft_vec4f_dot (normal, incident);
	return (ft_vec4f_sub (incident, ft_vec4f_mulf (normal, 2 * d)));
}

t_vec4f	ft_vec4f_project(t_vec4f a, t_vec4f b)
{
	return (ft_vec4f_mulf (a, ft_vec4f_dot (a, b) / ft_vec4f_dot (b, b)));
}

t_vec4f	ft_vec4f_reject(t_vec4f a, t_vec4f b)
{
	return (ft_vec4f_sub (a, ft_vec4f_project (a, b)));
}
