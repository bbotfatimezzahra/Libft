/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:44:17 by fbbot             #+#    #+#             */
/*   Updated: 2023/12/01 11:08:48 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	length;

	length = ft_strlen(s);
	i = 0;
	while (i <= length)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
