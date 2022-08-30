/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:40:01 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:40:01 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_f32	ft_fast_inv_sqrt(t_f32 x)
{
	t_s32	i;
	t_f32	x2;
	t_f32	y;

	x2 = x * 0.5F;
	y = x;
	i = *(t_s32 *)&y;
	i = 0x5f3759df - (i >> 1);
	y = *(t_f32 *)&i;
	y = y * (1.5f - (x2 * y * y));
	return (y);
}

t_bool	ft_approx_equ(t_f32 a, t_f32 b, t_f32 e)
{
	return (ft_abs (a - b) <= e);
}

t_bool	ft_approx_zero(t_f32 a, t_f32 e)
{
	return (ft_absf (a) <= e);
}
