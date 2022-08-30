/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_normalized.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:16:47 by soumanso          #+#    #+#             */
/*   Updated: 2022/08/30 17:16:47 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec3f	ft_vec3f_fast_normalized_or(t_vec3f v, t_vec3f fallback)
{
	t_f32	sqrd_len;

	if (ft_vec3f_approx_zero (v, 0.00001f))
		return (fallback);
	sqrd_len = v.x * v.x + v.y * v.y + v.z * v.z;
	return (ft_vec3f_mulf (v, ft_fast_inv_sqrt (sqrd_len)));
}

t_vec3f	ft_vec3f_fast_normalized(t_vec3f v)
{
	return (ft_vec3f_fast_normalized_or (v, ft_vec3f (0, 0, 0)));
}
