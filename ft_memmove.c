/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:07:10 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/18 11:33:54 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This file contains the implementation of the ft_memmove function, which
 * copies memory from one location to another while handling overlapping
 * memory areas. It uses a helper function, ft_backwards_memcpy, to copy
 * memory safely when the source and destination overlap.
 * 
 *  * ft_memmove - Copies memory from one location to another, handling overlap.
 * @dst: Pointer to the destination memory block.
 * @src: Pointer to the source memory block.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory block.
 * This function is safe to use when memory areas overlap.
 */
static void	*ft_backwards_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_cp;
	char	*src_cp;

	dest_cp = (char *)dest;
	src_cp = (char *)src;
	if (dest_cp == NULL && src_cp == NULL)
	{
		return (NULL);
	}
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
