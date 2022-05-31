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

t_mat4f	ft_mat4f_rotate(t_vec3f axis, t_f32 angle)
{
	t_mat4f	res;
	t_vec3f	n;
	t_f32	s;
	t_f32	c;

	n = ft_vec3f_normalized (axis);
	s = sinf (angle);
	c = cosf (angle);
	res.r0c0 = (n.x * n.x * (1 - c)) + c;
	res.r0c1 = (n.y * n.x * (1 - c)) - (n.z * s);
	res.r0c2 = (n.z * n.x * (1 - c)) + (n.y * s);
	res.r0c3 = 0;
	res.r1c0 = (n.x * n.y * (1 - c)) + (n.z * s);
	res.r1c1 = (n.y * n.y * (1 - c)) + c;
	res.r1c2 = (n.z * n.y * (1 - c)) - (n.x * s);
	res.r1c3 = 0;
	res.r2c0 = (n.x * n.z * (1 - c)) - (n.y * s);
	res.r2c1 = (n.y * n.z * (1 - c)) + (n.x * s);
	res.r2c2 = (n.z * n.z * (1 - c)) + c;
	res.r2c3 = 0;
	res.r3c0 = 0;
	res.r3c1 = 0;
	res.r3c2 = 0;
	res.r3c3 = 1;
	return (res);
}

t_mat4f	ft_mat4f_scale(t_vec3f scale)
{
	t_mat4f	res;

	res.r0c0 = scale.x;
	res.r0c1 = 0;
	res.r0c2 = 0;
	res.r0c3 = 0;
	res.r1c0 = 0;
	res.r1c1 = scale.y;
	res.r1c2 = 0;
	res.r1c3 = 0;
	res.r2c0 = 0;
	res.r2c1 = 0;
	res.r2c2 = scale.z;
	res.r2c3 = 0;
	res.r3c0 = 0;
	res.r3c1 = 0;
	res.r3c2 = 0;
	res.r3c3 = 1;
	return (res);
}

t_mat4f	ft_mat4f_translate(t_vec3f translation)
{
	t_mat4f	res;

	res.r0c0 = 1;
	res.r0c1 = 0;
	res.r0c2 = 0;
	res.r0c3 = 0;
	res.r1c0 = 0;
	res.r1c1 = 1;
	res.r1c2 = 0;
	res.r1c3 = 0;
	res.r2c0 = 0;
	res.r2c1 = 0;
	res.r2c2 = 1;
	res.r2c3 = 0;
	res.r3c0 = translation.x;
	res.r3c1 = translation.y;
	res.r3c2 = translation.z;
	res.r3c3 = 1;
	return (res);
}
