/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:14:35 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/10 14:35:31 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (dst_len >= size)
		return (src_len + size);
	i = 0;
	while (i < (size - 1 - dst_len) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/* 
#include <bsd/string.h>
int	main(void)
{
 	// char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	// char buff1[0xF00] = "there is no stars in the sky";
 	// char buff2[0xF00] = "there is no stars in the sky";
 	// size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	
	// size_t res_1 = strlcat(buff1, str, max);
	// size_t res_2 = ft_strlcat(buff2, str, max);

	// printf("res_1: %zu\nres_2: %zu\n", res_1, res_2);
	// printf("dst1: %s\ndst2: %s\n", buff1, buff2);
	char s1[4] = "";
 	char s2[4] = "";
 	size_t r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
 	size_t r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	printf("r1: %zu\nr2: %zu\n", r1, r2);
	printf("dst1: %s\ndst2: %s\n", s1, s2);

}
 */
