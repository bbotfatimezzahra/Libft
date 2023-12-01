/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:40:48 by fbbot             #+#    #+#             */
/*   Updated: 2023/12/01 11:31:09 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;

	i = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dst_length = ft_strlen(dst);
	if (dstsize <= dst_length || !dstsize)
		return (dstsize + ft_strlen(src));
	j = dst_length;
	while (src[i] && (j < dstsize - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_length + ft_strlen(src));
}
