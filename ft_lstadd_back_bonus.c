/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:25:28 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/16 22:19:53 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}

/* int	main(void)
{
	char	*n = "string";
	t_list	*last;
	t_list	*new = ft_lstnew(n);
	t_list	*head = ft_lstnew(NULL);
	head->next = ft_lstnew(NULL);
	head->next->next = ft_lstnew(NULL);
	ft_lstadd_back(&head, new);
	last = ft_lstlast(head);
	printf("last->content = %s\n", ((char *)last->content));
} */