/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolved_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:05:30 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/08 16:40:08 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

bool	resolved_stack(t_stack_node *a)
{
	if (a)
	{
		while ((a)->next)
		{
			if (a->value > a->next->value)
				return (false);
			a = a->next;
		}
		return (true);
	}
	return (true);
}
