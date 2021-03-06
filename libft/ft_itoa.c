/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:33:21 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:33:22 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_attval(int n, size_t *len, int *nbch)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*nbch = 1;
	while (n / *nbch < -9)
	{
		*nbch *= 10;
		*len += 1;
	}
}

char		*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	int		nbch;
	char	*str;

	ft_attval(n, &len, &nbch);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
		str[i++] = '-';
	if (n > 0)
		n = -n;
	while (nbch >= 1)
	{
		str[i++] = -(n / nbch % 10) + 48;
		nbch /= 10;
	}
	str[i] = '\0';
	return (str);
}
