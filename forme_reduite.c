/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forme_reduite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 20:00:07 by yplag             #+#    #+#             */
/*   Updated: 2015/04/03 20:02:45 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

double	trouver_coeff(char *av, int i)
{
	int		c;

	i = i - 4;
	while (ft_isdigit((int)av[i]) || av[i] == '.')
		i--;
	if (av[i - 1] == '-' || av[i - 2] == '-')
		c = -1;
	else
		c = 1;
	i++;
	while (--i > 0)
		av++;
	return (c * ft_atod(av));
}

void	trouver_coeff_avant_egal(char *av, t_env *e)
{
	int		i;

	i = 0;
	while (av[i] && av[i + 1] && av[i + 2] && av[i] != '=')
	{
		if (av[i] == 'X' && av[i + 1] == '^' && av[i + 2] == '0')
			e->a = e->a + trouver_coeff(av, i);
		i++;
	}
	i = 0;
	while (av[i] && av[i + 1] && av[i + 2] && av[i] != '=')
	{
		if (av[i] == 'X' && av[i + 1] == '^' && av[i + 2] == '1')
			e->b = e->b + trouver_coeff(av, i);
		i++;
	}
	i = 0;
	while (av[i] && av[i + 1] && av[i + 2] && av[i] != '=')
	{
		if (av[i] == 'X' && av[i + 1] == '^' && av[i + 2] == '2')
			e->c = e->c + trouver_coeff(av, i);
		i++;
	}
}

void	trouver_coeff_apres_egal(char *av, t_env *e, int i)
{
	int		t;

	t = i;
	while (av[i] && av[i + 1] && av[i + 2])
	{
		if (av[i] == 'X' && av[i + 1] == '^' && av[i + 2] == '0')
			e->a = e->a - trouver_coeff(av, i);
		i++;
	}
	i = t;
	while (av[i] && av[i + 1] && av[i + 2] && av[i])
	{
		if (av[i] == 'X' && av[i + 1] == '^' && av[i + 2] == '1')
			e->b = e->b - trouver_coeff(av, i);
		i++;
	}
	i = t;
	while (av[i] && av[i + 1] && av[i + 2] && av[i])
	{
		if (av[i] == 'X' && av[i + 1] == '^' && av[i + 2] == '2')
			e->c = e->c - trouver_coeff(av, i);
		i++;
	}
}

int		forme_reduite(char *av, t_env *e)
{
	int		i;
	int		t;

	i = 0;
	t = i;
	trouver_coeff_avant_egal(av, e);
	while (av[i] != '=' && av[i])
		i++;
	if (av[i] != '=')
	{
		ft_putstr("Error");
		return (0);
	}
	if (e->a == 0 && e->b == 0 && e->c == 0)
	{
		trouver_coeff_apres_egal(av, e, i);
		e->a = -e->a;
		e->b = -e->b;
		e->c = -e->c;
	}
	else
		trouver_coeff_apres_egal(av, e, i);
	return (1);
}
