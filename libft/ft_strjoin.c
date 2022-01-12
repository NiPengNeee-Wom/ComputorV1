/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:36:35 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:36:35 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dst;

	dst = ft_strnew(ft_strlen(s1) + ft_strlen (s2) + 1);
	if (!dst)
		return (NULL);
	ft_strcat(ft_strcat(dst, s1), s2);
	return (dst);
}
