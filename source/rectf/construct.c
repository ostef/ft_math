/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:33:32 by soumanso          #+#    #+#             */
/*   Updated: 2022/09/28 13:34:08 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_rectf	ft_rectf(t_f32 x, t_f32 y, t_f32 w, t_f32 h)
{
	t_rectf	res;

	res.x = x;
	res.y = y;
	res.w = w;
	res.h = h;
	return (res);
}
