/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:53:15 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/11 12:54:09 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 1;
	while ((unsigned char)*s1 && (unsigned char)*s2 && i < n)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/* 
int	main(void)
{
	char	*s1 = "BC";
	char	*s2 = "AB";
	size_t	n = 10;

	if (ft_strncmp(s1, s2, n) == strncmp(s1, s2, n))
		printf
		(
			"Same behavior\ns1: %s\ns2: %s\norgn res: %d\nmy res: %d\n"
			, s1, s2, strncmp(s1, s2, n), ft_strncmp(s1, s2, n)
		);
	else
		printf
		(
			"Something is wrong\ns1: %s\ns2: %s\norgn res: %d\nmy res: %d\n"
			, s1, s2, strncmp(s1, s2, n), ft_strncmp(s1, s2, n)
		);
}
 */
