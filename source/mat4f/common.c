/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:21:13 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 15:21:13 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat4f	ft_mat4f_identity(void)
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
	res.r3c0 = 0;
	res.r3c1 = 0;
	res.r3c2 = 0;
	res.r3c3 = 1;
	return (res);
}

t_mat4f	ft_mat4f_from_basis(t_vec3f right, t_vec3f up, t_vec3f forward,
	t_vec3f origin)
{
	t_mat4f	res;

	res.r0c0 = right.x;
	res.r0c1 = up.x;
	res.r0c2 = forward.x;
	res.r0c3 = origin.x;
	res.r1c0 = right.y;
	res.r1c1 = up.y;
	res.r1c2 = forward.y;
	res.r1c3 = origin.y;
	res.r2c0 = right.z;
	res.r2c1 = up.z;
	res.r2c2 = forward.z;
	res.r2c3 = origin.z;
	res.r3c0 = 0;
	res.r3c1 = 0;
	res.r3c2 = 0;
	res.r3c3 = 1;
	return (res);
}

t_vec4f	ft_mat4f_column(t_mat4f m, t_int i)
{
	return (ft_vec4f (m.n[0][i], m.n[1][i], m.n[2][i], m.n[3][i]));
}
