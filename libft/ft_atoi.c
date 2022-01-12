/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:32:33 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:32:33 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_skipspace(const char *str)
{
	char	*str2;

	str2 = (char *)str;
	while (str2 && ft_isspace(*str2))
		str2++;
	return (str2);
}

int				ft_atoi(const char *str)
{
	size_t	i;
	int		res;
	int		sign;
	char	*str2;

	i = 0;
	res = 0;
	sign = 1;
	str2 = ft_skipspace(str);
	if (str2[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (*str2 == '+')
		str2++;
	while (str2[i] != '\0')
	{
		if (str2[i] > '9' || str2[i] < '0')
			return (res * sign);
		res = str2[i++] + res * 10 - 48;
	}
	return (res * sign);
}
