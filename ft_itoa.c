/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:50:17 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/15 16:04:17 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_size(int n)
{
	size_t	size;

	if (n == INT_MIN)
		return (11);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n >= 10)
	{
		size++;
		n /= 10;
	}
	return (++size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	size = int_size(n);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[size] = '\0';
	while (size > (0 + (str[0] == '-')))
	{
		str[--size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/* 
int	main(void)
{
	int	n = -10;
	printf("n = %d\n", n);
	printf("n = %s\n", ft_itoa(n));
}
 */
