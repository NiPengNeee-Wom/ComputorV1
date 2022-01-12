/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution_equation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 20:00:29 by yplag             #+#    #+#             */
/*   Updated: 2015/04/03 20:00:30 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void	resolution_equation4(t_env *e)
{
	double res;

	res = -e->a / e->b;
	ft_putstr("The Solution is: \n");
	printf("%g\n", res);
}
