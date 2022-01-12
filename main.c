/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 20:00:22 by yplag             #+#    #+#             */
/*   Updated: 2015/04/03 20:00:23 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void	resolution_equation(t_env *e)
{
	if (e->a != 0 && e->p_d == 0)
		ft_putstr("no solutions\n");
	else if (e->a == 0 && e->b == 0 && e->c == 0)
		ft_putstr("all coefficents 0 the solutions are all real numbers\n");
	else if (e->p_d == 2)
	{
		if (e->disc > 0)
			resolution_equation1(e);
		else if (e->disc == 0)
			resolution_equation2(e);
		else if (e->disc < 0)
			resolution_equation3(e);
	}
	else if (e->p_d > 2)
		ft_putstr("degree bigger than 2, i can't solve\n");
	else if (e->p_d == 1)
		resolution_equation4(e);
}

int		main(int ac, char **av)
{
	t_env e;

	e.a = 0;
	e.b = 0;
	e.c = 0;
	if (ac != 2)
		return (0);
	if (forme_reduite(av[1], &e) == 0)
		return (0);
	degree_polynomiale(av[1], &e);
	ft_putstr("polynomial degree : ");
	ft_putnbr(e.p_d);
	ft_putstr("\n");
	if (e.p_d <= 2)
		imp_forme_reduite(&e);
	e.disc = e.b * e.b - 4 * e.a * e.c;
	resolution_equation(&e);
	return (0);
}
