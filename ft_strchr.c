/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:11:00 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/10 16:43:41 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr++;
	}
	if (*ptr == (char)c)
		return ((char *)ptr);
	return (NULL);
}
/* 
int	main(void)
{
	char 	*s = "Eu sou Stephanie";
	int	c = -204;
	char	*r1 = strchr(s, c);
	char	*r2 = ft_strchr(s, c);
	if (r1 == r2)
		printf("same result\n");
	else
		printf("something is wrong\n");
}
 */
