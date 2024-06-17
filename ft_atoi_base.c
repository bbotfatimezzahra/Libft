/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbbot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:42:47 by fbbot             #+#    #+#             */
/*   Updated: 2023/08/30 11:27:23 by fbbot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	convert_to_decimal(char *str, char *base)
{
	int	converted;
	int	length;
	int	index;

	converted = 0;
	length = 0;
	while (base[length])
		length++;
	index = char_in_base(*str, base);
	while (*str && index != -1)
	{
		converted = (converted * length) + index;
		str++;
		index = char_in_base(*str, base);
	}
	return (converted);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		result;

	if (check_base(base) <= 1)
		return (0);
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = convert_to_decimal(str, base);
	return (result * sign);
}
