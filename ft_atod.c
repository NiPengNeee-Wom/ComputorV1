/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:08:22 by yplag             #+#    #+#             */
/*   Updated: 2015/04/03 19:08:25 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

double ft_atod(const char *str)
{
	double	nb;
	double	part;
	double	sign;

	while (ft_isblank(*str))
		str++;
	sign = (*str == '-') ? -1.0 : 1.0;
	str = (*str == '-' || *str == '+') ? str + 1 : str;
	nb = 0.0;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + (*(str++) - '0');
	if (*str == '.' || *str == ',')
	{
		while (*(++str) >= '0' && *str <= '9')
			part = 0.0;
		while (*(--str) >= '0' && *str <= '9')
			part = (part + (*str - '0')) / 10.0;
		nb += part;
	}
	return (nb * sign);
}
