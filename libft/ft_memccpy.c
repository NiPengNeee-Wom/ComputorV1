/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:33:37 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:33:38 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*sdst;
	char	*ssrc;
	char	x;

	i = 0;
	sdst = (char *)dst;
	ssrc = (char *)src;
	x = (char)c;
	while (i < n)
	{
		if ((*sdst++ = *ssrc++) == x)
			return (sdst);
		i++;
	}
	return (NULL);
}
