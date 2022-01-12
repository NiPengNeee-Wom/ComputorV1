/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:38:43 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:38:44 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *r;

	r = NULL;
	if (!str)
		return (r);
	while (*str)
	{
		if (*str == c)
			r = (char *)str;
		str++;
	}
	if (!c)
		r = (char *)str;
	return (r);
}
