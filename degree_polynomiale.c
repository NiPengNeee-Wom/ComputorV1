/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   degree_polynomiale.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 20:00:01 by yplag             #+#    #+#             */
/*   Updated: 2015/04/03 20:00:02 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

int		trouver_degree(char *av, int i, int d, t_env *e)
{
	int		c;

	while (--i >= -2)
		av++;
	c = ft_atoi(av);
	if (c == 2 && e->c == 0)
		return (d);
	else if (c == 1 && e->b == 0)
		return (d);
	else if (c == 0 && e->a == 0)
		return (d);
	if (c > d)
		return (c);
	return (d);
}

void	degree_polynomiale(char *av, t_env *e)
{
	int		i;
	int		d;

	i = 0;
	d = 0;
	while (av[i] && av[i + 1] && av[i + 2] && av[i])
	{
		if (av[i] == 'X' && av[i + 1] == '^' && av[i - 4] != '0')
			d = trouver_degree(av, i, d, e);
		i++;
	}
	e->p_d = d;
}
