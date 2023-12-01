/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:09:35 by fbbot             #+#    #+#             */
/*   Updated: 2023/11/14 16:22:19 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmps1;
	unsigned char	*tmps2;

	i = 0;
	if (!n)
		return (0);
	tmps1 = (unsigned char *)s1;
	tmps2 = (unsigned char *)s2;
	while ((i < n - 1) && (tmps1[i] == tmps2[i]))
			i++;
	return (tmps1[i] - tmps2[i]);
}
