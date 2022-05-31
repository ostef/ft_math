/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:20:37 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:20:37 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec4f	ft_vec4f(t_f32 x, t_f32 y, t_f32 z, t_f32 w)
{
	t_vec4f	res;

	res.x = x;
	res.y = y;
	res.z = z;
	res.w = w;
	return (res);
}
