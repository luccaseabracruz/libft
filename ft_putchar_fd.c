/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:31:00 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/15 18:08:04 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
/* 
int	main(void)
{
	char c = 'A';

	printf("Output should be: A\nActual output: ");
	ft_putchar_fd(c, 1); // 1 is stdout
	printf("\n");

	return (0);
}
 */
