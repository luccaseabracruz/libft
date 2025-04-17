/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseabra- <lseabra-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:39:33 by lseabra-          #+#    #+#             */
/*   Updated: 2025/04/17 21:21:06 by lseabra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst && f)
	{
		current = lst;
		while (current)
		{
			f(current->content);
			current = current->next;
		}
	}
}

/* void	to_uppercase(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	del_function(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *head = ft_lstnew(ft_strdup("hello"));
	head->next = ft_lstnew(ft_strdup("world"));
	head->next->next = ft_lstnew(ft_strdup("libft"));

	printf("Before ft_lstiter:\n");
	print_list(head);

	ft_lstiter(head, to_uppercase);

	printf("\nAfter ft_lstiter:\n");
	print_list(head);

	ft_lstclear(&head, del_function);
	return 0;
} */
