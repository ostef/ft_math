/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:04:54 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 16:04:54 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat3f	ft_mat3f_transposed(t_mat3f m)
{
	t_mat3f	res;

	res.r0c0 = m.r0c0;
	res.r0c1 = m.r1c0;
	res.r0c2 = m.r2c0;
	res.r1c0 = m.r0c1;
	res.r1c1 = m.r1c1;
	res.r1c2 = m.r2c1;
	res.r2c0 = m.r0c2;
	res.r2c1 = m.r1c2;
	res.r2c2 = m.r2c2;
	return (res);
}

t_vec3f	ft_mat3f_right_vector(t_mat3f m)
{
	return (ft_vec3f_normalized (ft_mat3f_column (m, 0)));
}

t_vec3f	ft_mat3f_up_vector(t_mat3f m)
{
	return (ft_vec3f_normalized (ft_mat3f_column (m, 1)));
}

t_vec3f	ft_mat3f_forward_vector(t_mat3f m)
{
	return (ft_vec3f_normalized (ft_mat3f_column (m, 2)));
}

t_vec3f	ft_mat3f_scale_vector(t_mat3f m)
{
	return (ft_vec3f (
			ft_vec3f_len (ft_mat3f_column (m, 0)),
			ft_vec3f_len (ft_mat3f_column (m, 1)),
			ft_vec3f_len (ft_mat3f_column (m, 2))
		));
}
