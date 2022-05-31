/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specific.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:52:15 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:52:15 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec3f	ft_vec3f_cross(t_vec3f a, t_vec3f b)
{
	return (ft_vec3f (
			a.y * b.z - a.z * b.y,
			a.z * b.x - a.x * b.x,
			a.x * b.y - a.y * b.x
		));
}

t_f32	ft_vec3f_signed_angle(t_vec3f a, t_vec3f b, t_vec3f axis)
{
	t_vec3f	c;
	t_f32	s;

	c = ft_vec3f_cross (a, b);
	s = ft_sign (ft_vec3f_dot (axis, c));
	return (ft_vec3f_angle (a, b) * s);
}
