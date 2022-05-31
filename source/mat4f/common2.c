/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:04:54 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 16:04:54 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat4f	ft_mat4f_transposed(t_mat4f m)
{
	t_mat4f	res;

	res.r0c0 = m.r0c0;
	res.r0c1 = m.r1c0;
	res.r0c2 = m.r2c0;
	res.r0c3 = m.r3c0;
	res.r1c0 = m.r0c1;
	res.r1c1 = m.r1c1;
	res.r1c2 = m.r2c1;
	res.r1c3 = m.r3c1;
	res.r2c0 = m.r0c2;
	res.r2c1 = m.r1c2;
	res.r2c2 = m.r2c2;
	res.r2c3 = m.r3c2;
	res.r3c0 = m.r0c3;
	res.r3c1 = m.r1c3;
	res.r3c2 = m.r2c3;
	res.r3c3 = m.r3c3;
	return (res);
}
