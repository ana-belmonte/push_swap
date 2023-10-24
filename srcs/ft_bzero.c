/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:16:01 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 20:06:57 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_bzero(void *str, size_t n)
{
	char			*new_buffer;
	unsigned int	i;

	new_buffer = (char *) str;
	i = 0;
	while (i < n)
	{
		new_buffer[i] = 0;
		i++;
	}
}
