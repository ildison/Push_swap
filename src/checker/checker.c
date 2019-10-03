/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 15:07:40 by cormund           #+#    #+#             */
/*   Updated: 2019/10/03 18:45:43 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_checker.h"

void			checker(int n_arg, char **arg)
{
	t_checker	*chkr;

	chkr = (t_checker *)ft_memalloc(sizeof(t_checker));
	if (!chkr)
		error(PS_ERROR_MALLOC);
	read_arg(&chkr->a, n_arg, arg, &chkr->flags);
	read_operations(chkr);
	check_sorted(chkr->a, chkr->b, size_stack(chkr->a)) ? PS_KO : PS_OK;
}

int				main(int ac, char **av)
{
	if (ac > 1)
		checker(ac - 1, av + 1);
	return (0);
}
