/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checker.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:30:32 by cormund           #+#    #+#             */
/*   Updated: 2019/09/30 20:30:51 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_CHECKER_H
# define PS_CHECKER_H

# include "ps_shared.h"

# define PS_STDIN 0

typedef struct		s_checker
{
	t_stack			*a;
	t_stack			*b;
	char			flags;
}					t_checker;

# endif