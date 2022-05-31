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

t_vec3f	ft_mat3f_mulv(t_mat3f a, t_vec3f b)
{
	t_vec3f	res;

	res.x = a.r0c0 * b.x + a.r0c1 * b.y + a.r0c2 * b.z;
	res.y = a.r1c0 * b.x + a.r1c1 * b.y + a.r1c2 * b.z;
	res.z = a.r2c0 * b.x + a.r2c1 * b.y + a.r2c2 * b.z;
	return (res);
}

t_mat3f	ft_mat3f_mul(t_mat3f a, t_mat3f b)
{
	t_mat3f	res;

	res.r0c0 = a.r0c0 * b.r0c0 + a.r0c1 * b.r1c0 + a.r0c2 * b.r2c0;
	res.r0c1 = a.r0c0 * b.r0c1 + a.r0c1 * b.r1c1 + a.r0c2 * b.r2c1;
	res.r0c2 = a.r0c0 * b.r0c2 + a.r0c1 * b.r1c2 + a.r0c2 * b.r2c2;
	res.r1c0 = a.r1c0 * b.r0c0 + a.r1c1 * b.r1c0 + a.r1c2 * b.r2c0;
	res.r1c1 = a.r1c0 * b.r0c1 + a.r1c1 * b.r1c1 + a.r1c2 * b.r2c1;
	res.r1c2 = a.r1c0 * b.r0c2 + a.r1c1 * b.r1c2 + a.r1c2 * b.r2c2;
	res.r2c0 = a.r2c0 * b.r0c0 + a.r2c1 * b.r1c0 + a.r2c2 * b.r2c0;
	res.r2c1 = a.r2c0 * b.r0c1 + a.r2c1 * b.r1c1 + a.r2c2 * b.r2c1;
	res.r2c2 = a.r2c0 * b.r0c2 + a.r2c1 * b.r1c2 + a.r2c2 * b.r2c2;
	return (res);
}
