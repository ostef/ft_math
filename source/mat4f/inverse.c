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

t_mat4f	ft_mat4f_inverse(t_mat4f m)
{
	t_mat4f	res;
	t_vec3f	cols[4];
	t_vec3f	v[4];
	t_f32	inv_det;

	cols[0] = ft_mat4f_column (m, 0).xyz;
	cols[1] = ft_mat4f_column (m, 1).xyz;
	cols[2] = ft_mat4f_column (m, 2).xyz;
	cols[3] = ft_mat4f_column (m, 3).xyz;
	v[0] = ft_vec3f_cross (cols[0], cols[1]);
	v[1] = ft_vec3f_cross (cols[2], cols[3]);
	v[2] = ft_vec3f_sub (ft_vec3f_mulf (cols[0], m.r3c1), ft_vec3f_mulf (cols[1], m.r3c0));
	v[3] = ft_vec3f_sub (ft_vec3f_mulf (cols[2], m.r3c3), ft_vec3f_mulf (cols[3], m.r3c2));
	inv_det = 1 / (ft_vec3f_dot (v[0], v[3]) + ft_vec3f_dot (v[1], v[2]));
	v[0] = ft_vec3f_mulf (v[0], inv_det);
	v[1] = ft_vec3f_mulf (v[1], inv_det);
	v[2] = ft_vec3f_mulf (v[2], inv_det);
	v[3] = ft_vec3f_mulf (v[3], inv_det);
	res.r0.xyz = ft_vec3f_add (ft_vec3f_cross (cols[1], v[3]), ft_vec3f_mulf (v[1], m.r3c1));
	res.r1.xyz = ft_vec3f_sub (ft_vec3f_cross (v[3], cols[0]), ft_vec3f_mulf (v[1], m.r3c0));
	res.r2.xyz = ft_vec3f_add (ft_vec3f_cross (cols[3], v[2]), ft_vec3f_mulf (v[0], m.r3c3));
	res.r3.xyz = ft_vec3f_sub (ft_vec3f_cross (v[2], cols[2]), ft_vec3f_mulf (v[0], m.r3c2));
	res.r0.w = -ft_vec3f_dot (cols[1], v[1]);
	res.r1.w = ft_vec3f_dot (cols[0], v[1]);
	res.r2.w = -ft_vec3f_dot (cols[3], v[0]);
	res.r3.w = ft_vec3f_dot (cols[2], v[0]);
	return (res);
}
