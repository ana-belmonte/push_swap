/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizestack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:14:21 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/08 16:40:17 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

long int	sizestack(t_stack_node **a)
{
	long int		i;
	t_stack_node	*tmp;

	i = 0;
	tmp = *a;
	if (*a)
	{
		while (tmp)
		{
			tmp = tmp->next;
			i++;
		}
		return (i);
	}
	return (0);
}
