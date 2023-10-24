/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:30:50 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 19:38:25 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	create_stack(t_stack_node **a, char **av, int ac)
{
	t_stack_node	*node;
	t_stack_node	*end;
	int				i;
	int				err;

	err = 0;
	i = 1;
	while (i < ac)
	{
		node = ft_calloc(sizeof(t_stack_node), 1);
		if (!node)
			return ;
		node->value = ft_atoli(&av[i], &err);
		if (*a == NULL)
			*a = node;
		else
			end->next = node;
		if (err || !(*av[i] == 32 || *av[i] == '\0' 
				|| (*av[i] >= 9 && *av[i] <= 13))) 
			ft_exit(a);
		i += (*av[i] == '\0');
		end = node;
	}
	checkers(a);
}
