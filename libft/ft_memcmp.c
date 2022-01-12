/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:33:47 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:33:48 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n)
	{
		if (*(unsigned const char*)s1++ != *(unsigned const char*)s2++)
			return ((int)*(unsigned const char*)s1) - \
			(*(unsigned const char*)s2);
		n--;
	}
	return (0);
}
