/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   approx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:40:01 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:40:01 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_bool	ft_approx_equ(t_f32 a, t_f32 b, t_f32 e)
{
	return (ft_abs (a - b) <= e);
}

t_bool	ft_approx_zero(t_f32 a, t_f32 e)
{
	return (ft_absf (a) <= e);
}
