/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   approx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:38:58 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:38:58 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_bool	ft_vec4f_approx_equ(t_vec4f a, t_vec4f b, t_f32 e)
{
	return (ft_approx_equ (a.x, b.x, e) && ft_approx_equ (a.y, b.y, e)
		&& ft_approx_equ (a.z, b.z, e) && ft_approx_equ (a.w, b.w, e));
}

t_bool	ft_vec4f_approx_zero(t_vec4f a, t_f32 e)
{
	return (ft_approx_zero (a.x, e) && ft_approx_zero (a.y, e)
		&& ft_approx_zero (a.z, e) && ft_approx_zero (a.w, e));
}
