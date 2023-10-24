/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comands2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:10:51 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 18:11:51 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	rb_cmd(t_stack_node **b)
{
	long int		headvalue;
	t_stack_node	*tmp;

	if (*b)
	{
		tmp = *b;
		headvalue = tmp->value;
		while (tmp->next)
		{
			tmp->value = tmp->next->value;
			tmp = tmp->next;
		}
		tmp->value = headvalue;
	}
}

void	rra_cmd(t_stack_node **a)
{
	t_stack_node	*a_cpy;
	t_stack_node	*tmp;

	tmp = *a;
	a_cpy = *a;
	if (*a)
	{
		while (a_cpy->next)
			a_cpy = a_cpy->next;
		while (tmp->next->next)
			tmp = tmp->next;
		a_cpy->next = *a;
		*a = a_cpy;
		tmp->next = NULL;
	}
}

void	rrb_cmd(t_stack_node **b)
{
	t_stack_node	*b_cpy;
	t_stack_node	*tmp;

	tmp = *b;
	b_cpy = *b;
	if (*b)
	{
		while (b_cpy->next)
			b_cpy = b_cpy->next;
		while (tmp->next->next)
			tmp = tmp->next;
		b_cpy->next = *b;
		*b = b_cpy;
		tmp->next = NULL;
	}
}

void	pa_cmd(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp;

	if (*a)
	{
		tmp = (*b)->next;
		(*b)->next = *a;
		*a = *b;
		*b = tmp;
	}
}

void	pb_cmd(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp;

	if (*a)
	{
		tmp = (*a)->next;
		(*a)->next = *b;
		*b = *a;
		*a = tmp;
	}
}
