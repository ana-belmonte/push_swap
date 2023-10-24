/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:40:24 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 19:42:37 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	r_rotate_a(t_stack_node **a)
{
	rra_cmd(a);
	ft_miniprintf("rra\n");
}

void	r_rotate_b(t_stack_node **b)
{
	rrb_cmd(b);
	ft_miniprintf("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	rra_cmd(a);
	rrb_cmd(b);
	ft_miniprintf("rrr\n");
}

void	push_a(t_stack_node **a, t_stack_node **b)
{
	pa_cmd(a, b);
	ft_miniprintf("pa\n");
}

void	push_b(t_stack_node **a, t_stack_node **b)
{
	pb_cmd(a, b);
	ft_miniprintf("pb\n");
}
