/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:34:27 by soumanso          #+#    #+#             */
/*   Updated: 2022/09/29 12:34:27 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec2f	ft_vec2f_mulv(t_vec2f a, t_vec2f b)
{
	t_vec2f	res;

	res.x = a.x * b.x;
	res.y = a.y * b.y;
	return (res);
}
