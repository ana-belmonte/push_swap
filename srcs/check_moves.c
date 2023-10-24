/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:54:01 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/24 11:03:42 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	execute_moves(char *instruct, t_stack_node **a, t_stack_node **b)
{
	if (ft_strcmp("ra\n", instruct) == 0)
		ra_cmd(a);
	else if (ft_strcmp("rb\n", instruct) == 0)
		rb_cmd(b);
	else if (ft_strcmp("sa\n", instruct) == 0)
		sa_cmd(a);
	else if (ft_strcmp("sb\n", instruct) == 0)
		sb_cmd(b);
	else if (ft_strcmp("pa\n", instruct) == 0)
		pa_cmd(a, b);
	else if (ft_strcmp("pb\n", instruct) == 0)
		pb_cmd(a, b);
	else if (ft_strcmp("rra\n", instruct) == 0)
		rra_cmd(a);
	else if (ft_strcmp("rrb\n", instruct) == 0)
		rrb_cmd(b);
	else
		ft_exit(a);
}

void	check_moves(t_stack_node **a, t_stack_node **b)
{
	char	*instruct;
	int		fd;

	fd = 0;
	instruct = get_next_line(fd);
	while (instruct != NULL)
	{
		execute_moves(instruct, a, b);
		free(instruct);
		instruct = get_next_line(fd);
	}
	free(instruct);
	if (resolved_stack(*a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
