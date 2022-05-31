/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:22:24 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:22:24 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_f32	ft_vec2f_dot(t_vec2f a, t_vec2f b)
{
	return (a.x * b.x + a.y * b.y);
}

t_f32	ft_vec2f_len(t_vec2f v)
{
	return (sqrtf (v.x * v.x + v.y * v.y));
}

t_vec2f	ft_vec2f_normalized_or(t_vec2f v, t_vec2f fallback)
{
	if (ft_vec2f_approx_zero (v, 0.00001f))
		return (fallback);
	return (ft_vec2f_divf (v, ft_vec2f_len (v)));
}

t_vec2f	ft_vec2f_normalized(t_vec2f v)
{
	return (ft_vec2f_normalized_or (v, ft_vec2f (0, 0)));
}
