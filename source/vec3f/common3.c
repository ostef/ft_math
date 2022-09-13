/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:41:03 by soumanso          #+#    #+#             */
/*   Updated: 2022/09/04 13:41:03 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_f32	ft_vec3f_dist(t_vec3f a, t_vec3f b)
{
	return (ft_vec3f_len (ft_vec3f_sub (b, a)));
}

t_f32	ft_vec3f_sqrd_dist(t_vec3f a, t_vec3f b)
{
	return (ft_vec3f_sqrd_len (ft_vec3f_sub (b, a)));
}
