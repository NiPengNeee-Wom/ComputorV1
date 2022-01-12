/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:35:38 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:35:38 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if (!s1 && s2)
		return ((unsigned char)(-*s2));
	else if (s1 && !s2)
		return ((unsigned char)(*s1));
	else if (!s1 && !s2)
		return (0);
	while (*s1 && *s2)
	{
		if (*s1++ != *s2++)
			return ((unsigned char)*--s1 - (unsigned char)(*--s2));
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
