/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:49:18 by fbbot             #+#    #+#             */
/*   Updated: 2023/12/01 11:21:09 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	length;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = ft_calloc(length, sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcat(s3, s1, length);
	ft_strlcat(s3, s2, length);
	return (s3);
}
