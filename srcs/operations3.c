/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:41:25 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 19:42:17 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	rotate_a(t_stack_node **a)
{
	ra_cmd(a);
	ft_miniprintf("ra\n");
}

void	rotate_b(t_stack_node **b)
{
	rb_cmd(b);
	ft_miniprintf("rb\n");
}

void	rr(t_stack_node **a, t_stack_node **b)
{
	ra_cmd(a);
	rb_cmd(b);
	ft_miniprintf("rr\n");
}
