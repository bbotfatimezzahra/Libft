/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:56:43 by fbbot             #+#    #+#             */
/*   Updated: 2023/12/01 09:39:43 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmpdst;
	char	*tmpsrc;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return ((void *)src);
	tmpsrc = (char *)src;
	tmpdst = (char *)dst;
	if (dst > src)
	{
		while (len--)
			tmpdst[len] = tmpsrc[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
