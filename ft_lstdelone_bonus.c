/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 22:59:41 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/17 00:06:09 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/* void	del_content(void *content)
{
	if (content)
	{
		printf("Deleting content: %s\n", (char *)content);
		free(content);
	}
}

int	main(void)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return (1);
	char *str = strdup("Olá, mundo!");
	if (!str)
	{
		free(node);
		return (1);
	}
	node->content = str;
	node->next = NULL;
	ft_lstdelone(node, del_content);
	if (!node)
		printf("Node delected\n");
	else
		printf("Node was not delected\n");
	return (0);
} */