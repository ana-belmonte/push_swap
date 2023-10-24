/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:38:26 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/11 11:35:27 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	get_median(t_stack_node **a)
{
	int				median;
	int				*values;
	int				i;
	long long int	totalvalues;
	t_stack_node	*tmp_a;

	i = -1;
	totalvalues = 0;
	values = malloc(sizeof(int) * sizestack(a));
	if (!values)
		return (0);
	tmp_a = *a;
	while (tmp_a)
	{
		values[++i] = tmp_a->value;
		tmp_a = tmp_a->next;
	}
	i = -1;
	while (++i < sizestack(a))
		totalvalues += values[i];
	median = totalvalues / i;
	free(values);
	return (median); 
}

void	big_algorithm(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp_a;
	int				median;
	int				small_high;

	small_high = 0;
	tmp_a = *a;
	median = get_median(a);
	while (sizestack(a) > 3)
	{
		if (tmp_a->value < median)
			push_b(a, b);
		else 
			rotate_a(a);
		tmp_a = *a;
		median = get_median(a);
	}
	minisort(a);
	while (sizestack(b) > 0)
	{
		get_besti(a, b, small_high);
		move_better(a, b);
	}
	rotate_until_last_is_last(a);
}
