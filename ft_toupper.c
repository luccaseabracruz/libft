/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:54:10 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/10 16:05:00 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) && c >= 97)
		c -= 32;
	return (c);
}
/* 
int	main(void)
{
	int	c = -4;

	printf("c: %c\nnew c: %c", c, ft_toupper(c));
}
 */
