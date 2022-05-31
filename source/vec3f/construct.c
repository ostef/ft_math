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

t_vec3f	ft_vec3f(t_f32 x, t_f32 y, t_f32 z)
{
	t_vec3f	res;

	res.x = x;
	res.y = y;
	res.z = z;
	return (res);
}

/*
t_vec3f	ft_vec3f_from_vec3i(t_vec3i v)
{
	return (ft_vec3f (v.x, v.y, v.z));
}
*/

t_vec3f	ft_vec3f_from_vec2f(t_vec2f v, t_f32 z)
{
	return (ft_vec3f (v.x, v.y, z));
}

/*
t_vec3f	ft_vec3f_from_vec2i(t_vec2i v, t_f32 z)
{
	return (ft_vec3f (v.x, v.y, z));
}
*/
