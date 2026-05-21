/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucca <lucca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:54:45 by lseabra-          #+#    #+#             */
/*   Updated: 2026/05/21 16:11:47 by lucca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlen - Calculates the length of a null-terminated string.
 * @param s: The string whose length is to be calculated.
 *
 * @return: The number of characters in the string, excluding the
 * 			null terminator.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char str[] = "Lucca";
	printf("str: %s\nlength: %zu\n", str, ft_strlen(str));
}*/