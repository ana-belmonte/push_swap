/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:01:33 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/10 22:02:04 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	find_last(t_stack_node **a)
{
	int				last;
	t_stack_node	*tmp_a;

	tmp_a = *a;
	last = tmp_a->value;
	while (tmp_a)
	{
		if (tmp_a->value > last)
			last = tmp_a->value;
		tmp_a = tmp_a->next;
	}
	return (last);
}

int	find_pos(int last, t_stack_node **a)
{
	int				pos;
	t_stack_node	*tmp_a;

	pos = 0;
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->value == last)
			return (pos);
		pos++;
		tmp_a = tmp_a->next;
	}
	return (-1);
}

void	rotate_until_last_is_last(t_stack_node **a)
{
	int	i;
	int	j;
	int	last;

	last = find_last(a);
	i = find_pos(last, a) + 1;
	j = sizestack(a) - i;
	if (i < j)
	{
		while (i--)
			rotate_a(a);
	}
	else
	{
		while (j--)
			r_rotate_a(a);
	}
}
