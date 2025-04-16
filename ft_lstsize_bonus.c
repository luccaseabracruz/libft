/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:10:43 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/16 19:20:10 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*current;

	counter = 0;
	current = lst;
	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}

/* int	main(void)
{
	t_list	*head;

	head = ft_lstnew(NULL);
	head->next = ft_lstnew(NULL);
	head->next->next = ft_lstnew(NULL);
	head->next->next->next = ft_lstnew(NULL);
	printf("lst_size = %d\n", ft_lstsize(head));
} */