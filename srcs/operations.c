/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:09:04 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 19:42:25 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	swap_a(t_stack_node **a)
{
	sa_cmd(a);
	ft_miniprintf("sa\n");
}

void	swap_b(t_stack_node **b)
{
	sb_cmd(b);
	ft_miniprintf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	sa_cmd(a);
	sb_cmd(b);
	ft_miniprintf("ss\n");
}
