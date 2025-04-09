/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:07:10 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/09 17:49:11 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_backwards_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_cp;
	char	*src_cp;

	dest_cp = (char *)dest;
	src_cp = (char *)src;
	if (dest_cp == NULL && src_cp == NULL)
		return (NULL);
	while (n > 0)
	{
		n--;
		dest_cp[n] = src_cp[n];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src)
		return (dest);
	if (src < dest && src + n >= dest)
		ft_backwards_memcpy(dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
