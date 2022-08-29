/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orthonormal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:18:59 by soumanso          #+#    #+#             */
/*   Updated: 2022/08/29 14:18:59 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

void	ft_vec3f_right_to_orthonormal(t_vec3f r, t_vec3f *u, t_vec3f *f)
{
	t_vec3f	up;
	t_vec3f	forward;

	up = ft_vec3f_cross (ft_vec3f(0, 0, 1), r);
	if (ft_approx_zero (ft_vec3f_dot (up, up), 0.000001f))
	{
		forward = ft_vec3f_cross (r, ft_vec3f(0, 1, 0));
		up = ft_vec3f_cross (forward, r);
	}
	else
		forward = ft_vec3f_cross (r, up);
	if (u)
		*u = ft_vec3f_normalized (up);
	if (f)
		*f = ft_vec3f_normalized (forward);
}

void	ft_vec3f_up_to_orthonormal(t_vec3f u, t_vec3f *r, t_vec3f *f)
{
	t_vec3f	right;
	t_vec3f	forward;

	right = ft_vec3f_cross (u, ft_vec3f(0, 0, 1));
	if (ft_approx_zero (ft_vec3f_dot (right, right), 0.000001f))
	{
		forward = ft_vec3f_cross (ft_vec3f(1, 0, 0), u);
		right = ft_vec3f_cross (u, forward);
	}
	else
		forward = ft_vec3f_cross (right, u);
	if (r)
		*r = ft_vec3f_normalized (right);
	if (f)
		*f = ft_vec3f_normalized (forward);
}

void	ft_vec3f_forward_to_orthonormal(t_vec3f f, t_vec3f *r, t_vec3f *u)
{
	t_vec3f	right;
	t_vec3f	up;

	right = ft_vec3f_cross (ft_vec3f(0, 1, 0), f);
	if (ft_approx_zero (ft_vec3f_dot (right, right), 0.000001f))
	{
		up = ft_vec3f_cross (f, ft_vec3f(1, 0, 0));
		right = ft_vec3f_cross (up, f);
	}
	else
		up = ft_vec3f_cross (f, right);
	if (r)
		*r = ft_vec3f_normalized (right);
	if (u)
		*u = ft_vec3f_normalized (up);
}
