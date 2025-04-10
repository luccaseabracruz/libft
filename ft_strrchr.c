/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:18:31 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/10 17:47:32 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	const char	*last;

	ptr = s;
	last = s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			last = ptr;
		ptr++;
	}
	if (*ptr == (char)c)
		last = ptr;
	if (*last == (char)c)
		return ((char *)last);
	else
		return (NULL);
}
/* 
int	main(void)
{
	char	*s = "AaBcCDd";
	int		c = 92;
	if (strrchr(s, c) == ft_strrchr(s, c))
		printf("Same behavior.\n");
	else
		printf
		(
			"Something is wrong.\n
			original: %s\n
			My: %s\n"
			, strrchr(s, c), ft_strrchr(s, c)
		);
}
 */
