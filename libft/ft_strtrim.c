/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:38:18 by yplag             #+#    #+#             */
/*   Updated: 2015/04/03 19:12:00 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	char	*swp;

	while (ft_isblank(*s))
		s++;
	swp = ft_strchr(s, '\0') - 1;
	while (ft_isblank(*swp))
		swp--;
	return (ft_strsub(s, 0, swp - s + 1));
}
