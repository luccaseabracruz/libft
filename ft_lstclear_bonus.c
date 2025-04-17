/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:23:44 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/17 21:15:16 by lseabra-         ###   ########.fr       */
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

/* void	del_function(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *head = ft_lstnew(ft_strdup("Node 1"));
	head->next = ft_lstnew(ft_strdup("Node 2"));
	head->next->next = ft_lstnew(ft_strdup("Node 3"));

	printf("Before clear: %s\n", (char *)head->content);

	ft_lstclear(&head, del_function);

	if (!head)
		printf("List successfully cleared.\n");
	else
		printf("List not cleared properly.\n");

	return 0;
} */
