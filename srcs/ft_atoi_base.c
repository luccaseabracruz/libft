/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:17:27 by lseabra-          #+#    #+#             */
/*   Updated: 2025/08/27 17:32:33 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	validate_base(char *base)
{
	int	i;
	int	j;
	int	size;

	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	validate_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	find_position(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	if (!validate_base(base))
		return (result);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (validate_char(str[i], base))
	{
		if (find_position(str[i], base) >= (int)ft_strlen(base))
			return (result * sign);
		result = result * ft_strlen(base) + find_position(str[i], base);
		i++;
	}
	return (result * sign);
}
