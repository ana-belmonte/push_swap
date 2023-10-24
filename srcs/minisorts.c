/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisorts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:17:40 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/08 16:39:47 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	minisort(t_stack_node **a)
{
	t_stack_node	*tmp;

	tmp = (*a)->next;
	if ((*a)->value < tmp->value && tmp->value > tmp->next->value \
	&& (*a)->value < tmp->next->value)
	{
		swap_a(a);
		rotate_a(a);
	}
	else if ((*a)->value < tmp->value && tmp->value > tmp->next->value \
	&& (*a)->value > tmp->next->value)
		r_rotate_a(a);
	else if ((*a)->value > tmp->value && tmp->value > tmp->next->value \
	&& (*a)->value > tmp->next->value)
	{
		swap_a(a);
		r_rotate_a(a);
	}
	else if ((*a)->value > tmp->value && tmp->value < tmp->next->value \
	&& (*a)->value > tmp->next->value)
		rotate_a(a);
	else if ((*a)->value > tmp->value && tmp->value < tmp->next->value \
	&& (*a)->value < tmp->next->value)
		swap_a(a);
}

/*
void minifivesort(t_stack_node **a, t_stack_node **b)
{
	t_stack_node *tmp_a;
	
	if(*a)
	{
		tmp_a = *a;
		lookforsmalest(a);
		while(sizestack(a) > 3)
		{
			if(tmp_a->next->value == lookforsmalest(a))
				swap_a(a);
			else if(tmp_a->next->next->next->value == lookforsmalest(a))
				swap_a(&tmp_a);
			else if(tmp_a->next->next->next->next->value == lookforsmalest(a))
				r_rotate_a(a);
			push_b(a, b);
		}
		minisort(a);
		push_b(a, b);
		push_b(a, b);	
	}
}
*/