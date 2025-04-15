/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:03:26 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/15 17:15:59 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* 
void ft_change_even_index(unsigned int i, char *c)
{
	if (i % 2 == 0 && ft_isalpha(*c))
		*c = ft_toupper(*c);
}

int	main(void)
{
	char	str[] = "abcdefg";
	printf("before: %s\n", str);
	ft_striteri(str, ft_change_even_index);
	printf("after:  %s\n", str);
}
 */
