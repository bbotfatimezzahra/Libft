/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:24:41 by fbbot             #+#    #+#             */
/*   Updated: 2023/11/27 21:32:28 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_part(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

static void	free_split(char **split, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**fill_split(char **split, char const *s, char c)
{
	int	i;
	int	j;
	int	part_length;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			part_length = count_part(&s[i], c);
			split[j] = ft_calloc(part_length + 1, sizeof(*split[j]));
			if (split[j] == NULL)
			{
				free_split(split, j);
				return (NULL);
			}
			ft_strlcpy(split[j], &s[i], part_length + 1);
			j++;
			i += part_length;
		}
		else
			i++;
	}
	return (split);
}

static char	**create_split(char const *s, char c, int *l)
{
	char	**split;
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			length++;
		i++;
	}
	*l = length;
	split = ft_calloc(length + 1, sizeof(*split));
	if (!split)
		return (NULL);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		length;

	if (!s)
		return (NULL);
	split = create_split(s, c, &length);
	if (!split)
		return (NULL);
	split = fill_split(split, s, c);
	if (!split)
		return (NULL);
	split[length] = NULL;
	return (split);
}
