/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:59:56 by yplag             #+#    #+#             */
/*   Updated: 2015/04/03 19:59:57 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTOR_H
# define COMPUTOR_H
# include "libft/libft.h"
# include <stdio.h>

typedef struct	s_env
{
	double		a;
	double		b;
	double		c;
	double		disc;
	double		r;
	double		sol1;
	double		sol2;
	int			p_d;
}				t_env;

int				forme_reduite(char *av, t_env *e);
void			imp_forme_reduite(t_env *e);
void			resolution_equation1(t_env *e);
void			resolution_equation2(t_env *e);
void			resolution_equation3(t_env *e);
void			degree_polynomiale(char *av, t_env *e);
void			resolution_equation4(t_env *e);
double			ft_atod(const char *av);

#endif
