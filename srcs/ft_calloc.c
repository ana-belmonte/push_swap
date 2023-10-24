/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:00:32 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/09 19:38:47 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*calloc;

	calloc = malloc(size * nmemb);
	if (!calloc)
		return (NULL);
	ft_bzero(calloc, nmemb * size);
	return (calloc);
}
