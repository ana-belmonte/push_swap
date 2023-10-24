/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:46:39 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/08 16:39:59 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	organize_b(t_stack_node **b, long int i)
{
	if ((sizestack(b) / 2) >= i)
	{
		while (i > 0)
		{
			rotate_b(b);
			i--;
		}
	}
	else if ((sizestack(b) / 2) < i)
	{
		while (i < sizestack(b))
		{
			r_rotate_b(b);
			i++;
		}
	}
}

void	organize_a(t_stack_node **a, long int i)
{
	if ((sizestack(a) / 2) >= i)
	{
		while (i > 0)
		{
			rotate_a(a);
			i--;
		}
	}
	else if ((sizestack(a) / 2) < i)
	{
		while (i < sizestack(a))
		{
			r_rotate_a(a);
			i++;
		}
	}
}

void	move_better(t_stack_node **a, t_stack_node **b)
{
	t_values		smalest;
	int				best;
	t_stack_node	*tmp_b;

	best = INT_MAX;
	tmp_b = *b;
	smalest.smalest_pos = 0;
	smalest.smalest_pos_besti = 0;
	while (tmp_b)
	{
		if ((tmp_b->cost + tmp_b->besti->cost) < best)
		{
			smalest.smalest_pos = tmp_b->position;
			smalest.smalest_pos_besti = tmp_b->besti->position;
			best = tmp_b->cost + tmp_b->besti->cost;
		}
		tmp_b = tmp_b->next;
	}
	organize_a(a, smalest.smalest_pos_besti);
	organize_b(b, smalest.smalest_pos);
	push_a(a, b);
}

//printstack(*a);
//printstack(*b);
//printf("nb pos: %d\n", tmp_b->position);
//printf("besti pos: %d\n", tmp_b->besti->position);
//printf("besti pos: %d\n", tmp_b->besti->position);
//printf("small pos besti: %ld\n", tmp_b->besti->value);
//printf("Nb Rotation in a: %ld\n", i);
//printstack(*a);
//printf("Nb Rotation in b: %ld\n", i);
//printstack(*b);