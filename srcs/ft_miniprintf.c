/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_miniprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:31:15 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/08 16:39:33 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_miniformat(va_list *argms, const char *str, int i)
{
	if (str[i] == 's')
		ft_putstr(va_arg(*argms, char *));
}

void	ft_miniprintf(const char *str, ...)
{
	int		i;
	va_list	argms;

	if (!str)
		return ;
	va_start(argms, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_miniformat(&argms, str, i);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(argms);
}
