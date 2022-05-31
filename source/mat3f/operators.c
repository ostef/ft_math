/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:07:13 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 15:07:13 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat3f	ft_mat3f_add(t_mat3f a, t_mat3f b)
{
	t_mat3f	res;

	res.r0c0 = a.r0c0 + b.r0c0;
	res.r0c1 = a.r0c1 + b.r0c1;
	res.r0c2 = a.r0c2 + b.r0c2;
	res.r1c0 = a.r1c0 + b.r1c0;
	res.r1c1 = a.r1c1 + b.r1c1;
	res.r1c2 = a.r1c2 + b.r1c2;
	res.r2c0 = a.r2c0 + b.r2c0;
	res.r2c1 = a.r2c1 + b.r2c1;
	res.r2c2 = a.r2c2 + b.r2c2;
	return (res);
}

t_mat3f	ft_mat3f_sub(t_mat3f a, t_mat3f b)
{
	t_mat3f	res;

	res.r0c0 = a.r0c0 - b.r0c0;
	res.r0c1 = a.r0c1 - b.r0c1;
	res.r0c2 = a.r0c2 - b.r0c2;
	res.r1c0 = a.r1c0 - b.r1c0;
	res.r1c1 = a.r1c1 - b.r1c1;
	res.r1c2 = a.r1c2 - b.r1c2;
	res.r2c0 = a.r2c0 - b.r2c0;
	res.r2c1 = a.r2c1 - b.r2c1;
	res.r2c2 = a.r2c2 - b.r2c2;
	return (res);
}

t_mat3f	ft_mat3f_neg(t_mat3f a)
{
	t_mat3f	res;

	res.r0c0 = -a.r0c0;
	res.r0c1 = -a.r0c1;
	res.r0c2 = -a.r0c2;
	res.r1c0 = -a.r1c0;
	res.r1c1 = -a.r1c1;
	res.r1c2 = -a.r1c2;
	res.r2c0 = -a.r2c0;
	res.r2c1 = -a.r2c1;
	res.r2c2 = -a.r2c2;
	return (res);
}

t_mat3f	ft_mat3f_mulf(t_mat3f m, t_f32 s)
{
	t_mat3f	res;

	res.r0c0 = m.r0c0 * s;
	res.r0c1 = m.r0c1 * s;
	res.r0c2 = m.r0c2 * s;
	res.r1c0 = m.r1c0 * s;
	res.r1c1 = m.r1c1 * s;
	res.r1c2 = m.r1c2 * s;
	res.r2c0 = m.r2c0 * s;
	res.r2c1 = m.r2c1 * s;
	res.r2c2 = m.r2c2 * s;
	return (res);
}

t_mat3f	ft_mat3f_divf(t_mat3f m, t_f32 s)
{
	t_mat3f	res;

	res.r0c0 = m.r0c0 / s;
	res.r0c1 = m.r0c1 / s;
	res.r0c2 = m.r0c2 / s;
	res.r1c0 = m.r1c0 / s;
	res.r1c1 = m.r1c1 / s;
	res.r1c2 = m.r1c2 / s;
	res.r2c0 = m.r2c0 / s;
	res.r2c1 = m.r2c1 / s;
	res.r2c2 = m.r2c2 / s;
	return (res);
}
