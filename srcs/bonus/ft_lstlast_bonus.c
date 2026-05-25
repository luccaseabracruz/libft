/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucca <lucca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:26:25 by lseabra-          #+#    #+#             */
/*   Updated: 2026/05/21 16:11:47 by lucca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
	{
		return (NULL);
	}
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}

/* int	main(void)
{
	t_list	*head;
	int	n0 = 0;
	int	n1 = 1;
	int	n2 = 2;
	int	n3 = 3;
	int	n42 = 42;

	head = ft_lstnew(&n0);
	head->next = ft_lstnew(&n1);
	head->next->next = ft_lstnew(&n2);
	head->next->next->next = ft_lstnew(&n3);
	head->next->next->next = ft_lstnew(&n42);
	printf("lst_node_content = %d\n", *(int *)((ft_lstlast(head))->content));
} */