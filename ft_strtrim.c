/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:18:11 by fbbot             #+#    #+#             */
/*   Updated: 2023/12/01 11:56:19 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (!s1[i])
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	len = j - i + 1;
	if (len <= 0 || i >= ft_strlen(s1))
		return (ft_strdup(""));
	trim = ft_calloc(len + 1, sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[i], len + 1);
	return (trim);
}
