/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:08:45 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 18:15:38 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	set_small_besti(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp_a;
	long int		smalest;

	smalest = lookforsmalest(a);
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->value == smalest)
		{
			(*b)->besti = tmp_a;
			break ;
		}
		tmp_a = tmp_a->next;
	}
}

void	position(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp_a;
	t_stack_node	*tmp_b;
	int				i;
	int				j;

	tmp_a = *a;
	tmp_b = *b;
	tmp_b->besti = NULL;
	i = 0;
	j = 0;
	set_pos(a);
	set_pos(b);
	while (tmp_a)
	{
		tmp_a->position = i;
		i++;
		tmp_a = tmp_a->next;
	}
	while (tmp_b)
	{
		tmp_b->position = j;
		j++;
		tmp_b = tmp_b->next;
	}
}

void	get_besti(t_stack_node **a, t_stack_node **b, int small_high)
{
	t_stack_node	*tmp_a;
	t_stack_node	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	position(a, b);
	while (tmp_b)
	{
		tmp_a = *a;
		small_high = get_small(&tmp_a, &tmp_b);
		while (tmp_a)
		{
			if (tmp_a->value > tmp_b->value && tmp_a->value == small_high)
			{
				tmp_b->besti = tmp_a;
				break ;
			}
			tmp_a = tmp_a->next;
		}
		if (tmp_b->besti == NULL)
			set_small_besti(a, &tmp_b);
		tmp_b->cost = calculate_cost(b, tmp_b->position);
		tmp_b->besti->cost = calculate_cost(a, tmp_b->besti->position);
		tmp_b = tmp_b->next;
	}
}
