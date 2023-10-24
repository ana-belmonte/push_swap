/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:41:09 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/24 11:00:16 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "pushswap.h"
# include "get_next_line.h"

void	check_moves(t_stack_node **a, t_stack_node **b);
void	execute_moves(char *instruct, t_stack_node **a, t_stack_node **b);

#endif
