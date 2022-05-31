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

t_mat3f	ft_mat3f_inverse(t_mat3f m)
{
	t_mat3f	res;
	t_vec3f	cols[3];
	t_vec3f	rows[3];
	t_f32	inv_det;

	cols[0] = ft_mat3f_column (m, 0);
	cols[1] = ft_mat3f_column (m, 1);
	cols[2] = ft_mat3f_column (m, 2);
	rows[0] = ft_vec3f_cross (cols[1], cols[2]);
	rows[1] = ft_vec3f_cross (cols[2], cols[0]);
	rows[2] = ft_vec3f_cross (cols[0], cols[1]);
	inv_det = 1 / ft_vec3f_dot (rows[2], cols[2]);
	res.r0 = ft_vec3f_mulf (rows[0], inv_det);
	res.r1 = ft_vec3f_mulf (rows[1], inv_det);
	res.r2 = ft_vec3f_mulf (rows[2], inv_det);
	return (res);
}
