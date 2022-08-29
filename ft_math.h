/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soumanso <soumanso@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:11:39 by soumanso          #+#    #+#             */
/*   Updated: 2022/05/31 14:11:39 by soumanso         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include "libft.h"
# include <math.h>

t_bool	ft_approx_equ(t_f32 a, t_f32 b, t_f32 e);
t_bool	ft_approx_zero(t_f32 a, t_f32 e);

typedef union s_vec2f
{
	struct
	{
		t_f32	x;
		t_f32	y;
	};
	t_f32		n[2];
}	t_vec2f;

t_vec2f	ft_vec2f(t_f32 x, t_f32 y);

t_f32	ft_vec2f_dot(t_vec2f a, t_vec2f b);
t_f32	ft_vec2f_len(t_vec2f v);
t_vec2f	ft_vec2f_normalized_or(t_vec2f v, t_vec2f fallback);
t_vec2f	ft_vec2f_normalized(t_vec2f v);
t_f32	ft_vec2f_angle(t_vec2f a, t_vec2f b);
t_vec2f	ft_vec2f_reflect(t_vec2f incident, t_vec2f normal);
t_vec2f	ft_vec2f_project(t_vec2f a, t_vec2f b);
t_vec2f	ft_vec2f_reject(t_vec2f a, t_vec2f b);

t_f32	ft_vec2f_signed_angle(t_vec2f a, t_vec2f b);
t_vec2f	ft_vec2f_rotate(t_vec2f v, t_f32 a);
t_vec2f	ft_vec2f_perp_cw(t_vec2f v);
t_vec2f	ft_vec2f_perp_ccw(t_vec2f v);

t_vec2f	ft_vec2f_add(t_vec2f a, t_vec2f b);
t_vec2f	ft_vec2f_sub(t_vec2f a, t_vec2f b);
t_vec2f	ft_vec2f_neg(t_vec2f a);
t_vec2f	ft_vec2f_mulf(t_vec2f v, t_f32 s);
t_vec2f	ft_vec2f_divf(t_vec2f v, t_f32 s);

t_bool	ft_vec2f_approx_equ(t_vec2f a, t_vec2f b, t_f32 e);
t_bool	ft_vec2f_approx_zero(t_vec2f a, t_f32 e);

typedef union s_vec3f
{
	struct
	{
		t_f32	x;
		t_f32	y;
		t_f32	z;
	};
	struct
	{
		t_f32	dummy_x;
		t_vec2f	yz;
	};
	t_vec2f		xy;
	t_f32		n[3];
}	t_vec3f;

t_vec3f	ft_vec3f(t_f32 x, t_f32 y, t_f32 z);

t_f32	ft_vec3f_dot(t_vec3f a, t_vec3f b);
t_f32	ft_vec3f_len(t_vec3f v);
t_vec3f	ft_vec3f_normalized_or(t_vec3f v, t_vec3f fallback);
t_vec3f	ft_vec3f_normalized(t_vec3f v);
t_f32	ft_vec3f_angle(t_vec3f a, t_vec3f b);
t_vec3f	ft_vec3f_reflect(t_vec3f incident, t_vec3f normal);
t_vec3f	ft_vec3f_project(t_vec3f a, t_vec3f b);
t_vec3f	ft_vec3f_reject(t_vec3f a, t_vec3f b);

t_vec3f	ft_vec3f_cross(t_vec3f a, t_vec3f b);
t_f32	ft_vec3f_signed_angle(t_vec3f a, t_vec3f b, t_vec3f axis);
void	ft_vec3f_right_to_orthonormal(t_vec3f r, t_vec3f *u, t_vec3f *f);
void	ft_vec3f_up_to_orthonormal(t_vec3f u, t_vec3f *r, t_vec3f *f);
void	ft_vec3f_forward_to_orthonormal(t_vec3f f, t_vec3f *r, t_vec3f *u);

t_vec3f	ft_vec3f_add(t_vec3f a, t_vec3f b);
t_vec3f	ft_vec3f_sub(t_vec3f a, t_vec3f b);
t_vec3f	ft_vec3f_neg(t_vec3f a);
t_vec3f	ft_vec3f_mulf(t_vec3f v, t_f32 s);
t_vec3f	ft_vec3f_divf(t_vec3f v, t_f32 s);

t_bool	ft_vec3f_approx_equ(t_vec3f a, t_vec3f b, t_f32 e);
t_bool	ft_vec3f_approx_zero(t_vec3f a, t_f32 e);

t_vec2f	ft_vec2f_from_vec3f(t_vec3f v);
t_vec3f	ft_vec3f_from_vec2f(t_vec2f v, t_f32 z);

typedef union s_vec4f
{
	struct
	{
		t_f32			x;
		t_f32			y;
		t_f32			z;
		t_f32			w;
	};
	union
	{
		struct
		{
			t_vec2f		xy;
			t_vec2f		zw;
		};
		t_vec3f			xyz;
		struct
		{
			t_f32		dummy_x;
			union
			{
				t_vec2f	yz;
				t_vec3f	yzw;
			};
		};
	};
	t_f32				n[4];
}	t_vec4f;

t_vec4f	ft_vec4f(t_f32 x, t_f32 y, t_f32 z, t_f32 w);

t_f32	ft_vec4f_dot(t_vec4f a, t_vec4f b);
t_f32	ft_vec4f_len(t_vec4f v);
t_vec4f	ft_vec4f_normalized_or(t_vec4f v, t_vec4f fallback);
t_vec4f	ft_vec4f_normalized(t_vec4f v);
t_f32	ft_vec4f_angle(t_vec4f a, t_vec4f b);
t_vec4f	ft_vec4f_reflect(t_vec4f incident, t_vec4f normal);
t_vec4f	ft_vec4f_project(t_vec4f a, t_vec4f b);
t_vec4f	ft_vec4f_reject(t_vec4f a, t_vec4f b);

t_vec4f	ft_vec4f_add(t_vec4f a, t_vec4f b);
t_vec4f	ft_vec4f_sub(t_vec4f a, t_vec4f b);
t_vec4f	ft_vec4f_neg(t_vec4f a);
t_vec4f	ft_vec4f_mulf(t_vec4f v, t_f32 s);
t_vec4f	ft_vec4f_divf(t_vec4f v, t_f32 s);

t_bool	ft_vec4f_approx_equ(t_vec4f a, t_vec4f b, t_f32 e);
t_bool	ft_vec4f_approx_zero(t_vec4f a, t_f32 e);

typedef union s_mat3f
{
	struct
	{
		t_f32	n00;
		t_f32	n01;
		t_f32	n02;
		t_f32	n10;
		t_f32	n11;
		t_f32	n12;
		t_f32	n20;
		t_f32	n21;
		t_f32	n22;
	};
	struct
	{
		t_f32	r0c0;
		t_f32	r0c1;
		t_f32	r0c2;
		t_f32	r1c0;
		t_f32	r1c1;
		t_f32	r1c2;
		t_f32	r2c0;
		t_f32	r2c1;
		t_f32	r2c2;
	};
	struct
	{
		t_vec3f	r0;
		t_vec3f	r1;
		t_vec3f	r2;
	};
	t_vec3f		rows[3];
	t_f32		n[3][3];
}	t_mat3f;

t_mat3f	ft_mat3f_identity(void);
t_vec3f	ft_mat3f_column(t_mat3f m, t_int i);
t_vec3f	ft_mat3f_right_vector(t_mat3f m);
t_vec3f	ft_mat3f_up_vector(t_mat3f m);
t_vec3f	ft_mat3f_forward_vector(t_mat3f m);
t_vec3f	ft_mat3f_scale_vector(t_mat3f m);
t_mat3f	ft_mat3f_transposed(t_mat3f m);
t_mat3f	ft_mat3f_inverse(t_mat3f m);

t_mat3f	ft_mat3f_rotate(t_vec3f axis, t_f32 angle);
t_mat3f	ft_mat3f_scale(t_vec3f scale);

t_mat3f	ft_mat3f_add(t_mat3f a, t_mat3f b);
t_mat3f	ft_mat3f_sub(t_mat3f a, t_mat3f b);
t_mat3f	ft_mat3f_neg(t_mat3f a);
t_mat3f	ft_mat3f_mulf(t_mat3f m, t_f32 s);
t_mat3f	ft_mat3f_divf(t_mat3f m, t_f32 s);
t_vec3f	ft_mat3f_mulv(t_mat3f a, t_vec3f b);
t_mat3f	ft_mat3f_mul(t_mat3f a, t_mat3f b);

typedef union s_mat4f
{
	struct
	{
		t_f32	n00;
		t_f32	n01;
		t_f32	n02;
		t_f32	n03;
		t_f32	n10;
		t_f32	n11;
		t_f32	n12;
		t_f32	n13;
		t_f32	n20;
		t_f32	n21;
		t_f32	n22;
		t_f32	n23;
		t_f32	n30;
		t_f32	n31;
		t_f32	n32;
		t_f32	n33;
	};
	struct
	{
		t_f32	r0c0;
		t_f32	r0c1;
		t_f32	r0c2;
		t_f32	r0c3;
		t_f32	r1c0;
		t_f32	r1c1;
		t_f32	r1c2;
		t_f32	r1c3;
		t_f32	r2c0;
		t_f32	r2c1;
		t_f32	r2c2;
		t_f32	r2c3;
		t_f32	r3c0;
		t_f32	r3c1;
		t_f32	r3c2;
		t_f32	r3c3;
	};
	struct
	{
		t_vec4f	r0;
		t_vec4f	r1;
		t_vec4f	r2;
		t_vec4f	r3;
	};
	t_vec4f		rows[4];
	t_f32		n[4][4];
}	t_mat4f;

t_mat4f	ft_mat4f_identity(void);
t_vec4f	ft_mat4f_column(t_mat4f m, t_int i);
t_vec3f	ft_mat4f_right_vector(t_mat4f m);
t_vec3f	ft_mat4f_up_vector(t_mat4f m);
t_vec3f	ft_mat4f_forward_vector(t_mat4f m);
t_vec3f	ft_mat4f_scale_vector(t_mat4f m);
t_mat4f	ft_mat4f_transposed(t_mat4f m);
t_mat4f	ft_mat4f_inverse(t_mat4f m);

t_mat4f	ft_mat4f_rotate(t_vec3f axis, t_f32 angle);
t_mat4f	ft_mat4f_scale(t_vec3f scale);
t_mat4f	ft_mat4f_translate(t_vec3f translation);
t_mat4f	ft_mat4f_look_at(t_vec3f origin, t_vec3f dir);

t_mat4f	ft_mat4f_add(t_mat4f a, t_mat4f b);
t_mat4f	ft_mat4f_sub(t_mat4f a, t_mat4f b);
t_mat4f	ft_mat4f_neg(t_mat4f a);
t_mat4f	ft_mat4f_mulf(t_mat4f m, t_f32 s);
t_mat4f	ft_mat4f_divf(t_mat4f m, t_f32 s);
t_vec4f	ft_mat4f_mulv(t_mat4f a, t_vec4f b);
t_mat4f	ft_mat4f_mul(t_mat4f a, t_mat4f b);
t_vec3f	ft_mat4f_transform_point(t_mat4f m, t_vec3f v);
t_vec3f	ft_mat4f_transform_vector(t_mat4f m, t_vec3f v);

#endif
