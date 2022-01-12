/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 16:38:12 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 16:38:13 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tablen(char **t)
{
	int	i;

	i = 0;
	if (!t)
		return (0);
	while (*t)
		i++, t++;
	return (i);
}