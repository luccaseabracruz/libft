/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:10:04 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/15 16:38:49 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/* 
static int	ft_tolower(int c)
{
	if (ft_isalpha(c) && c <= 90)
		c += 32;
	return (c);
}

int	main(void)
{
	char	*str = "Lucca Seabra Cruz";
	printf("str: %s\n", str);
	printf("res: %s\n", ft_strmapi(str, ft_tolower));
}
 */
