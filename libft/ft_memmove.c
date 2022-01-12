/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:34:03 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:34:05 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char	*swp;
	size_t	i;

	swp = malloc(len);
	if (!swp)
		return (NULL);
	i = 0;
	ft_memcpy(swp, src, len);
	while (i < len)
	{
		((char *)dst)[i] = swp[i];
		i++;
	}
	free(swp);
	return (dst);
}
