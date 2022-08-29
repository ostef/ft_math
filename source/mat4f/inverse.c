/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:23:44 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 15:23:44 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

static void	part1(t_mat4f m, t_vec3f *c, t_vec3f *v)
{
	c[0] = ft_mat4f_column (m, 0).xyz;
	c[1] = ft_mat4f_column (m, 1).xyz;
	c[2] = ft_mat4f_column (m, 2).xyz;
	c[3] = ft_mat4f_column (m, 3).xyz;
	v[0] = ft_vec3f_cross (c[0], c[1]);
	v[1] = ft_vec3f_cross (c[2], c[3]);
	v[2] = ft_vec3f_sub(
			ft_vec3f_mulf(c[0], m.n31), ft_vec3f_mulf(c[1], m.n30));
	v[3] = ft_vec3f_sub(
			ft_vec3f_mulf(c[2], m.n33), ft_vec3f_mulf(c[3], m.n32));
}

t_mat4f	ft_mat4f_inverse(t_mat4f m)
{
	t_mat4f	r;
	t_vec3f	c[4];
	t_vec3f	v[4];
	t_f32	inv_det;

	part1 (m, c, v);
	inv_det = 1 / (ft_vec3f_dot (v[0], v[3]) + ft_vec3f_dot (v[1], v[2]));
	v[0] = ft_vec3f_mulf (v[0], inv_det);
	v[1] = ft_vec3f_mulf (v[1], inv_det);
	v[2] = ft_vec3f_mulf (v[2], inv_det);
	v[3] = ft_vec3f_mulf (v[3], inv_det);
	r.r0.xyz = ft_vec3f_add(
			ft_vec3f_cross(c[1], v[3]), ft_vec3f_mulf(v[1], m.n31));
	r.r1.xyz = ft_vec3f_sub(
			ft_vec3f_cross(v[3], c[0]), ft_vec3f_mulf(v[1], m.n30));
	r.r2.xyz = ft_vec3f_add(
			ft_vec3f_cross(c[3], v[2]), ft_vec3f_mulf(v[0], m.n33));
	r.r3.xyz = ft_vec3f_sub(
			ft_vec3f_cross(v[2], c[2]), ft_vec3f_mulf(v[0], m.n32));
	r.r0.w = -ft_vec3f_dot (c[1], v[1]);
	r.r1.w = ft_vec3f_dot (c[0], v[1]);
	r.r2.w = -ft_vec3f_dot (c[3], v[0]);
	r.r3.w = ft_vec3f_dot (c[2], v[0]);
	return (r);
}
