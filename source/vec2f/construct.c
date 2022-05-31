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

t_vec2f	ft_vec2f(t_f32 x, t_f32 y)
{
	t_vec2f	res;

	res.x = x;
	res.y = y;
	return (res);
}

/*
t_vec2f	ft_vec2f_from_vec2i(t_vec2i v)
{
	return (ft_vec2f (v.x, v.y));
}
*/

t_vec2f	ft_vec2f_from_vec3f(t_vec3f v)
{
	return (ft_vec2f (v.x, v.y));
}

/*
t_vec2f	ft_vec2f_from_vec3i(t_vec3i v)
{
	return (ft_vec2f (v.x, v.y));
}
*/
