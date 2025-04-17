/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:23:44 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/17 20:33:07 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*save_next;

	if (lst && *lst && del)
	{
		current = *lst;
		while (current)
		{
			save_next = current->next;
			del(current->content);
			free(current);
			current = save_next;
		}
		*lst = NULL;
	}
}
