/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:51:54 by fbbot             #+#    #+#             */
/*   Updated: 2023/11/07 18:17:39 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		length;

	length = ft_strlen(s1);
	s2 = (char *) malloc(sizeof(char) * length + 1);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, length + 1);
	return (s2);
}
