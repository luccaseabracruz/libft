/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucca <lucca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:45:45 by lseabra-          #+#    #+#             */
/*   Updated: 2026/05/21 16:11:47 by lucca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stddef.h>

size_t	ft_uintlen_base(unsigned int nbr, char *base)
{
	size_t	len;
	size_t	base_len;

	len = 1;
	base_len = ft_strlen(base);
	while (nbr >= base_len)
	{
		len++;
		nbr /= base_len;
	}
	return (len);
}
