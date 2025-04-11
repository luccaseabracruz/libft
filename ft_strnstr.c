/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:55:22 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/11 12:52:19 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (*big && len > ft_strlen(little) - 1)
	{
		if (ft_strncmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/* 
#include <bsd/string.h>
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *og_ptr;
	char *my_ptr;
	
	og_ptr = strnstr(largestring, smallstring, 4);
	my_ptr = ft_strnstr(largestring, smallstring, 4);
	printf("\n");
	printf("largestring = %s\n", largestring);
	printf("smallstring = %s\n", smallstring);
	if (og_ptr == my_ptr)
		printf("Same result\n");
	else
		printf("Something wrong with ft_strnstr\n");
	printf("og_ptr = %s\n", og_ptr);
	printf("my_ptr = %s\n", my_ptr);
}
 */
