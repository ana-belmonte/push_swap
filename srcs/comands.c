/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comands.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:47:54 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 18:12:02 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sa_cmd(t_stack_node **a)
{
	long int		tmpvalue;
	t_stack_node	*tmp;

	if (*a)
	{
		tmp = *a;
		tmpvalue = tmp->value;
		tmp->value = tmp->next->value;
		tmp->next->value = tmpvalue;
	}
}

void	sb_cmd(t_stack_node **b)
{
	long int		tmpvalue;
	t_stack_node	*tmp;

	if (*b)
	{
		tmp = *b;
		tmpvalue = tmp->value;
		tmp->value = tmp->next->value;
		tmp->next->value = tmpvalue;
	}
}

void	ra_cmd(t_stack_node **a)
{
	long int		headvalue;
	t_stack_node	*tmp;

	if (*a)
	{
		tmp = *a;
		headvalue = tmp->value;
		while (tmp->next)
		{
			tmp->value = tmp->next->value;
			tmp = tmp->next;
		}
		tmp->value = headvalue;
	}
}
