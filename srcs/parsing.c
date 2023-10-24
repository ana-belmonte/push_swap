/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:13:27 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 18:09:07 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static bool	checkerdup(t_stack_node **a)
{
	t_stack_node	*tmp;
	t_stack_node	*tmp2;

	tmp = *a;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->value == tmp2->value)
				return (false);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (true);
}

void	checkers(t_stack_node **a)
{
	if (!checkerdup(a))
		ft_exit(a);
}
