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
	t_mat4f	r;

	r.n00 = a.n00 * b.n00 + a.n01 * b.n10 + a.n02 * b.n20 + a.n03 * b.n30;
	r.n01 = a.n00 * b.n01 + a.n01 * b.n11 + a.n02 * b.n21 + a.n03 * b.n31;
	r.n02 = a.n00 * b.n02 + a.n01 * b.n12 + a.n02 * b.n22 + a.n03 * b.n32;
	r.n03 = a.n00 * b.n03 + a.n01 * b.n13 + a.n02 * b.n23 + a.n03 * b.n33;
	r.n10 = a.n10 * b.n00 + a.n11 * b.n10 + a.n12 * b.n20 + a.n13 * b.n30;
	r.n11 = a.n10 * b.n01 + a.n11 * b.n11 + a.n12 * b.n21 + a.n13 * b.n31;
	r.n12 = a.n10 * b.n02 + a.n11 * b.n12 + a.n12 * b.n22 + a.n13 * b.n32;
	r.n13 = a.n10 * b.n03 + a.n11 * b.n13 + a.n12 * b.n23 + a.n13 * b.n33;
	r.n20 = a.n20 * b.n00 + a.n21 * b.n10 + a.n22 * b.n20 + a.n23 * b.n30;
	r.n21 = a.n20 * b.n01 + a.n21 * b.n11 + a.n22 * b.n21 + a.n23 * b.n31;
	r.n22 = a.n20 * b.n02 + a.n21 * b.n12 + a.n22 * b.n22 + a.n23 * b.n32;
	r.n23 = a.n20 * b.n03 + a.n21 * b.n13 + a.n22 * b.n23 + a.n23 * b.n33;
	r.n30 = a.n30 * b.n00 + a.n31 * b.n10 + a.n32 * b.n20 + a.n33 * b.n30;
	r.n31 = a.n30 * b.n01 + a.n31 * b.n11 + a.n32 * b.n21 + a.n33 * b.n31;
	r.n32 = a.n30 * b.n02 + a.n31 * b.n12 + a.n32 * b.n22 + a.n33 * b.n32;
	r.n33 = a.n30 * b.n03 + a.n31 * b.n13 + a.n32 * b.n23 + a.n33 * b.n33;
	return (r);
}

t_vec3f	ft_mat4f_transform_point(t_mat4f m, t_vec3f v)
{
	return (ft_mat4f_mulv (m, ft_vec4f (v.x, v.y, v.z, 1)).xyz);
}

t_vec3f	ft_mat4f_transform_vector(t_mat4f m, t_vec3f v)
{
	return (ft_mat4f_mulv (m, ft_vec4f (v.x, v.y, v.z, 0)).xyz);
}
