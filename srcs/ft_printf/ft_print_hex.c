/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucca <lucca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:53:23 by lseabra-          #+#    #+#             */
/*   Updated: 2026/05/21 16:11:47 by lucca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ft_print_hex(va_list args, char *base)
{
	int				counter;
	char			*buffer;
	size_t			len;
	unsigned int	arg;

	arg = va_arg(args, unsigned int);
	len = ft_uintlen_base(arg, base);
	buffer = ft_calloc(len + 1, sizeof(char));
	if (!buffer)
		return (0);
	while (len > 0)
	{
		buffer[--len] = base[arg % 16];
		arg /= 16;
	}
	counter = ft_putstr_count(buffer);
	free(buffer);
	return (counter);
}
