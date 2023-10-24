/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoli.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:12:45 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 19:44:19 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

long int	ft_atoli(char **str, int *err)
{
	long int	i;
	long int	a;
	int			s;

	i = 0;
	a = 0;
	s = 1;
	while (str[0][i] == 32 || (str[0][i] >= 9 && str[0][i] <= 13))
		i++;
	s = (str[0][i] != '-') - (str[0][i] == '-');
	i += (str[0][i] == '+' || str[0][i] == '-');
	if (!str[0][i])
		*err = 1;
	while (str[0][i] >= '0' && str[0][i] <= '9')
	{
		a = a * 10 + (str[0][i] - 48);
		if ((a * s) > INT_MAX || (a * s) < INT_MIN)
			*err = 1;
		i++;
	}
	str[0] += i;
	return (a * s);
}
