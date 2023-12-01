/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:57:44 by fbbot             #+#    #+#             */
/*   Updated: 2023/11/30 10:44:47 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	number_length(int nb, int base)
{
	long	lnb;
	int		length;

	length = 0;
	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		length++;
	}
	if (lnb == 0)
		return (1);
	while (lnb > 0)
	{
		lnb /= base;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	long	lnb;
	int		n_length;
	char	*result;

	lnb = n;
	n_length = number_length(lnb, 10);
	result = malloc(sizeof(char) * (n_length + 1));
	if (!result)
		return (NULL);
	if (lnb < 0)
	{
		result[0] = '-';
		lnb *= -1;
	}
	else if (lnb == 0)
		result[0] = '0';
	result[n_length--] = '\0';
	while (lnb > 0)
	{
		result[n_length--] = "0123456789"[lnb % 10];
		lnb /= 10;
	}
	return (result);
}
