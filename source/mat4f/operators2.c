/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:10:44 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 15:10:44 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec4f	ft_mat4f_mulv(t_mat4f a, t_vec4f b)
{
	t_vec4f	res;

	res.x = a.r0c0 * b.x + a.r0c1 * b.y + a.r0c2 * b.z + a.r0c3 * b.w;
	res.y = a.r1c0 * b.x + a.r1c1 * b.y + a.r1c2 * b.z + a.r1c3 * b.w;
	res.z = a.r2c0 * b.x + a.r2c1 * b.y + a.r2c2 * b.z + a.r2c3 * b.w;
	res.w = a.r2c0 * b.x + a.r2c1 * b.y + a.r2c2 * b.z + a.r2c3 * b.w;
	return (res);
}

t_mat4f	ft_mat4f_mul(t_mat4f a, t_mat4f b)
{
	t_mat4f	res;

	res.r0c0 = a.r0c0 * b.r0c0 + a.r0c1 * b.r1c0 + a.r0c2 * b.r2c0 + a.r0c3 * b.r3c0;
	res.r0c1 = a.r0c0 * b.r0c1 + a.r0c1 * b.r1c1 + a.r0c2 * b.r2c1 + a.r0c3 * b.r3c1;
	res.r0c2 = a.r0c0 * b.r0c2 + a.r0c1 * b.r1c2 + a.r0c2 * b.r2c2 + a.r0c3 * b.r3c2;
	res.r0c3 = a.r0c0 * b.r0c3 + a.r0c1 * b.r1c3 + a.r0c2 * b.r2c3 + a.r0c3 * b.r3c3;
	res.r1c0 = a.r1c0 * b.r0c0 + a.r1c1 * b.r1c0 + a.r1c2 * b.r2c0 + a.r1c3 * b.r3c0;
	res.r1c1 = a.r1c0 * b.r0c1 + a.r1c1 * b.r1c1 + a.r1c2 * b.r2c1 + a.r1c3 * b.r3c1;
	res.r1c2 = a.r1c0 * b.r0c2 + a.r1c1 * b.r1c2 + a.r1c2 * b.r2c2 + a.r1c3 * b.r3c2;
	res.r1c3 = a.r1c0 * b.r0c3 + a.r1c1 * b.r1c3 + a.r1c2 * b.r2c3 + a.r1c3 * b.r3c3;
	res.r2c0 = a.r2c0 * b.r0c0 + a.r2c1 * b.r1c0 + a.r2c2 * b.r2c0 + a.r2c3 * b.r3c0;
	res.r2c1 = a.r2c0 * b.r0c1 + a.r2c1 * b.r1c1 + a.r2c2 * b.r2c1 + a.r2c3 * b.r3c1;
	res.r2c2 = a.r2c0 * b.r0c2 + a.r2c1 * b.r1c2 + a.r2c2 * b.r2c2 + a.r2c3 * b.r3c2;
	res.r2c3 = a.r2c0 * b.r0c3 + a.r2c1 * b.r1c3 + a.r2c2 * b.r2c3 + a.r2c3 * b.r3c3;
	res.r3c0 = a.r3c0 * b.r0c0 + a.r3c1 * b.r1c0 + a.r3c2 * b.r2c0 + a.r3c3 * b.r3c0;
	res.r3c1 = a.r3c0 * b.r0c1 + a.r3c1 * b.r1c1 + a.r3c2 * b.r2c1 + a.r3c3 * b.r3c1;
	res.r3c2 = a.r3c0 * b.r0c2 + a.r3c1 * b.r1c2 + a.r3c2 * b.r2c2 + a.r3c3 * b.r3c2;
	res.r3c3 = a.r3c0 * b.r0c3 + a.r3c1 * b.r1c3 + a.r3c2 * b.r2c3 + a.r3c3 * b.r3c3;
	return (res);
}

t_vec3f	ft_mat4f_transform_point(t_mat4f m, t_vec3f v)
{
	return (ft_mat4f_mulv (m, ft_vec4f (v.x, v.y, v.z, 1)).xyz);
}

t_vec3f	ft_mat4f_transform_vector(t_mat4f m, t_vec3f v)
{
	return (ft_mat4f_mulv (m, ft_vec4f (v.x, v.y, v.z, 0)).xyz);
}
