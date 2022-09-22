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

t_mat4f	ft_mat4f_rotate_euler(t_vec3f euler)
{
	t_mat4f	res;

	res = ft_mat4f_rotate (ft_vec3f (1, 0, 0), euler.y);
	res = ft_mat4f_mul (ft_mat4f_rotate (ft_vec3f (0, 1, 0), euler.x), res);
	res = ft_mat4f_mul (ft_mat4f_rotate (ft_vec3f (0, 0, 1), euler.z), res);
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
	res.r0c3 = translation.x;
	res.r1c0 = 0;
	res.r1c1 = 1;
	res.r1c2 = 0;
	res.r1c3 = translation.y;
	res.r2c0 = 0;
	res.r2c1 = 0;
	res.r2c2 = 1;
	res.r2c3 = translation.z;
	res.r3c0 = 0;
	res.r3c1 = 0;
	res.r3c2 = 0;
	res.r3c3 = 1;
	return (res);
}

t_mat4f	ft_mat4f_look_at(t_vec3f origin, t_vec3f dir)
{
	t_vec3f	right;
	t_vec3f	up;
	t_mat4f	res;

	ft_vec3f_forward_to_orthonormal (dir, &right, &up);
	res.r0c0 = right.x;
	res.r0c1 = up.x;
	res.r0c2 = dir.x;
	res.r0c3 = origin.x;
	res.r1c0 = right.y;
	res.r1c1 = up.y;
	res.r1c2 = dir.y;
	res.r1c3 = origin.y;
	res.r2c0 = right.z;
	res.r2c1 = up.z;
	res.r2c2 = dir.z;
	res.r2c3 = origin.z;
	res.r3c0 = 0;
	res.r3c1 = 0;
	res.r3c2 = 0;
	res.r3c3 = 1;
	return (res);
}
