/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 23:17:44 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 20:04:44 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <stdbool.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_stack_node
{
	long int			value;
	int					position;
	int					cost;
	struct s_stack_node	*besti;
	struct s_stack_node	*next;

}	t_stack_node;

typedef struct s_values
{
	long int	smalest_pos;
	long int	smalest_pos_besti;
}	t_values;

long int	lookforsmalest(t_stack_node **a);
int			calculate_cost(t_stack_node **a, int pos);
void		set_pos(t_stack_node **stack);
int			get_small(t_stack_node **a, t_stack_node **b);
void		create_stack(t_stack_node **a, char **av, int ac);
void		printstack(t_stack_node *a);
long int	ft_atoli(char **str, int *err);
void		ft_miniprintf(const char *str, ...);
void		minisort(t_stack_node **a);
bool		resolved_stack(t_stack_node *a);
long int	sizestack(t_stack_node **a);
void		swap_a(t_stack_node **a);
void		swap_b(t_stack_node **b);
void		ss(t_stack_node **a, t_stack_node **b);
void		rotate_a(t_stack_node **a);
void		rotate_b(t_stack_node **b);
void		rr(t_stack_node **a, t_stack_node **b);
void		r_rotate_a(t_stack_node **a);
void		r_rotate_b(t_stack_node **b);
void		rrr(t_stack_node **a, t_stack_node **b);
void		push_a(t_stack_node **a, t_stack_node **b);
void		push_b(t_stack_node **a, t_stack_node **b);
void		sa_cmd(t_stack_node **a);
void		sb_cmd(t_stack_node **b);
void		ra_cmd(t_stack_node **a);
void		rb_cmd(t_stack_node **b);
void		rra_cmd(t_stack_node **a);
void		rrb_cmd(t_stack_node **b);
void		pa_cmd(t_stack_node **a, t_stack_node **b);
void		pb_cmd(t_stack_node **a, t_stack_node **b);
void		big_algorithm(t_stack_node **a, t_stack_node **b);
int			get_median(t_stack_node **a);
void		get_besti(t_stack_node **a, t_stack_node **b, int small_high);
void		free_stack(t_stack_node **a);
void		move_better(t_stack_node **a, t_stack_node **b);
void		rotate_until_last_is_last(t_stack_node **a);
void		printstack(t_stack_node *a);
void		checkers(t_stack_node **a);
int			ft_strcmp(char *s1, char *s2);
void		ft_exit(t_stack_node **a);
void		position(t_stack_node **a, t_stack_node **b);
void		set_small_besti(t_stack_node **a, t_stack_node **b);
void		ft_bzero(void *str, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);

#endif