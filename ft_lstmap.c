/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:26:20 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/15 14:00:15 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head = NULL;
	t_list	*newnode;

	if (!lst || !f)
	{
		return (NULL);
	}
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
            if (del)
                del(f(lst->content));
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, newnode);
		lst = lst->next;
	}
	return (head);
}

#include <assert.h>
#include <stdio.h>

void	*f(void* content)
{
	int *newdata = malloc(sizeof(int));
    if (!newdata)
        return NULL;
    *newdata = 99;
    return newdata;
}

void del(void* content)
{
    free(content);
}

int	main(void)
{
	int i = 0;
	t_list *lst1, *lst2;
	lst1 = ft_lstnew(&i);
	i++;
	while (i < 4)
	{
		ft_lstadd_back(&lst1, ft_lstnew(&i));
		i++;
	}
	assert(ft_lstsize(lst1) == 4);
	lst2 = ft_lstmap(lst1, &f, del);
	assert(ft_lstsize(lst2) == 4);
	while (lst2)
	{
		assert(*(int *)lst2->content == 99);
        lst2 = lst2->next;
	}
	printf("bellissima");
	return (0);
}