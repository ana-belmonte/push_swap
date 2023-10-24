/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:57:03 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/23 17:14:55 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

/*t_stack_node *stack_a( void ) 
{
	static t_stack_node stack;

	return (&stack);
}*/

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	create_stack(&a, av, ac);
	if (!resolved_stack(a))
	{
		if (sizestack(&a) == 2)
			swap_a(&a);
		else if (sizestack(&a) == 3)
			minisort(&a);
		else
			big_algorithm(&a, &b);
	}
	free_stack(&a);
}

//printstack(a);