/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freestack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:49:10 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/08 16:39:05 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	free_stack(t_stack_node **a)
{
	t_stack_node	*tmp_a;

	while (*a)
	{
		tmp_a = (*a)->next;
		free((*a));
		*a = tmp_a;
	}
	free(*a);
	*a = NULL;
}
