/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:32:58 by fbbot             #+#    #+#             */
/*   Updated: 2023/12/01 09:34:10 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*tmpdst;
	char		*tmpsrc;

	i = 0;
	if (!src && !dst)
		return (NULL);
	if (src == dst)
		return ((void *)src);
	tmpsrc = (char *)src;
	tmpdst = (char *)dst;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return (dst);
}
