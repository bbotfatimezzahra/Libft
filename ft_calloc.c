/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:20:38 by fbbot             #+#    #+#             */
/*   Updated: 2023/11/30 09:39:45 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (size && (count > (SIZE_MAX / size)))
		return (NULL);
	result = malloc(size * count);
	if (!result)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}
