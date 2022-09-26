/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:36:06 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 15:36:06 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat3f	ft_mat3f_rotate(t_vec3f axis, t_f32 angle)
{
	t_mat3f	res;
	t_vec3f	n;
	t_f32	s;
	t_f32	c;

	n = ft_vec3f_normalized (axis);
	s = sinf (angle);
	c = cosf (angle);
	res.r0c0 = (n.x * n.x * (1 - c)) + c;
	res.r0c1 = (n.y * n.x * (1 - c)) - (n.z * s);
	res.r0c2 = (n.z * n.x * (1 - c)) + (n.y * s);
	res.r1c0 = (n.x * n.y * (1 - c)) + (n.z * s);
	res.r1c1 = (n.y * n.y * (1 - c)) + c;
	res.r1c2 = (n.z * n.y * (1 - c)) - (n.x * s);
	res.r2c0 = (n.x * n.z * (1 - c)) - (n.y * s);
	res.r2c1 = (n.y * n.z * (1 - c)) + (n.x * s);
	res.r2c2 = (n.z * n.z * (1 - c)) + c;
	return (res);
}

t_mat3f	ft_mat3f_rotate_euler(t_vec3f euler)
{
	t_mat3f	res;

	res = ft_mat3f_rotate (ft_vec3f (1, 0, 0), euler.y);
	res = ft_mat3f_mul (ft_mat3f_rotate (ft_vec3f (0, 1, 0), euler.x), res);
	res = ft_mat3f_mul (ft_mat3f_rotate (ft_vec3f (0, 0, 1), euler.z), res);
	return (res);
}

t_mat3f	ft_mat3f_scale(t_vec3f scale)
{
	t_mat3f	res;

	res.r0c0 = scale.x;
	res.r0c1 = 0;
	res.r0c2 = 0;
	res.r1c0 = 0;
	res.r1c1 = scale.y;
	res.r1c2 = 0;
	res.r2c0 = 0;
	res.r2c1 = 0;
	res.r2c2 = scale.z;
	return (res);
}
