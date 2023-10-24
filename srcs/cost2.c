/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:12:34 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 18:13:08 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	calculate_cost(t_stack_node **a, int pos)
{
	int	cost;

	if (sizestack(a) / 2 > pos)
	{
		cost = pos;
	}
	else 
		cost = sizestack(a) - pos;
	return (cost);
}

void	set_pos(t_stack_node **stack)
{
	t_stack_node	*tmp;

	tmp = *stack;
	while (tmp)
	{
		tmp->position = 0;
		tmp = tmp->next;
	}
}

int	get_small(t_stack_node **a, t_stack_node **b)
{
	int				highest;
	t_stack_node	*tmp_a;

	tmp_a = *a;
	highest = INT_MAX;
	while (tmp_a)
	{
		if (tmp_a->value < highest && tmp_a->value > (*b)->value)
			highest = tmp_a->value;
		tmp_a = tmp_a->next;
	}
	return (highest);
}

long int	lookforsmalest(t_stack_node **a)
{
	t_stack_node	*tmp;
	long int		smalest;

	smalest = INT_MAX;
	if (*a)
	{
		tmp = *a;
		while (tmp->next)
		{
			if (tmp->value < smalest)
				smalest = tmp->value;
			tmp = tmp->next;
		}
		return (smalest);
	}
	return (0);
}
