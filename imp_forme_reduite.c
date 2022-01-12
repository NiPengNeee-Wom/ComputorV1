/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imp_forme_reduite.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 20:00:15 by yplag             #+#    #+#             */
/*   Updated: 2015/04/03 20:06:24 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

double		racine_carre(double n)
{
	int		s;
	double	d;
	double	x;

	s = 1;
	d = 0.000001;
	while (s * s <= n)
		s++;
	s--;
	while (d < 1.0)
	{
		x = (double)s + d;
		if ((x * x > (double)n))
		{
			x -= 0.000001;
			break ;
		}
		d += 0.000001;
	}
	return (x);
}

void		imp_forme_reduite(t_env *e)
{
	printf("Reduced form: %g * X^0 ", e->a);
	if (e->p_d > 0)
		printf("+ %g * X^1 ", e->b);
	if (e->p_d > 1)
		printf("+ %g * X^2 ", e->c);
	printf("= 0\n");
}

void		resolution_equation1(t_env *e)
{
	if ((e->r = racine_carre(e->disc)) == -1)
		return ;
	e->sol1 = (-e->b + e->r) / (2 * e->c);
	e->sol2 = (-e->b - e->r) / (2 * e->c);
	if (e->sol2 == 0)
		ft_putstr(0);
	ft_putstr("Discriminant is strictly positive, the two solutions are:\n");
	printf("%g \n", e->sol1);
	printf("%g \n", e->sol2);
}

void		resolution_equation2(t_env *e)
{
	e->sol1 = (-e->b) / (2 * e->c);
	ft_putstr("Discriminant is 0, the only solution is:\n");
	printf("%g\n", e->sol1);
}

void		resolution_equation3(t_env *e)
{
	if ((e->r = racine_carre(-e->disc)) == -1)
		return ;
	ft_putstr("Discriminant is strictly negative, the two solutions are:\n");
	printf("(%g - i * %g) / %g\n", -e->b, e->r, 2 * e->c);
	printf("(%g + i * %g) / %g\n", -e->b, e->r, 2 * e->c);
}
