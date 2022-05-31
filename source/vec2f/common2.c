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

t_f32	ft_vec2f_angle(t_vec2f a, t_vec2f b)
{
	t_f32	denom;
	t_f32	d;

	denom = sqrtf (ft_vec2f_dot (a, a) * ft_vec2f_dot (b, b));
	if (ft_approx_zero (denom, 0.00001f))
		return (0);
	d = ft_clampf (ft_vec2f_dot (a, b) / denom, -1, 1);
	return (acosf (d));
}

t_vec2f	ft_vec2f_reflect(t_vec2f incident, t_vec2f normal)
{
	t_f32	d;

	d = ft_vec2f_dot (normal, incident);
	return (ft_vec2f_sub (incident, ft_vec2f_mulf (normal, 2 * d)));
}

t_vec2f	ft_vec2f_project(t_vec2f a, t_vec2f b)
{
	return (ft_vec2f_mulf (a, ft_vec2f_dot (a, b) / ft_vec2f_dot (b, b)));
}

t_vec2f	ft_vec2f_reject(t_vec2f a, t_vec2f b)
{
	return (ft_vec2f_sub (a, ft_vec2f_project (a, b)));
}
