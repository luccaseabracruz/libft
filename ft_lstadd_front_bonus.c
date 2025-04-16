/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:16:47 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/16 18:51:28 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* static void	print_int_ll(t_list *head)
{
	t_list	*current;

	current = head;
	while (current)
	{
		printf("%d\n", *((int *)current->content));
		current = current->next;
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*new;
	int	n0 = 0;
	int	n1 = 1;
	int	n2 = 2;
	int	n3 = 3;
	head = ft_lstnew(&n1);
	head->next = ft_lstnew(&n2);
	head->next->next = ft_lstnew(&n3);
	printf("before:\n");
	print_int_ll(head);
	new = ft_lstnew(&n0);
	ft_lstadd_front(&head, new);
	printf("\nafter:\n");
	print_int_ll(head);
} */