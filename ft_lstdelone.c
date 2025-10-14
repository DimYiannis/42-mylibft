/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:49:03 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/14 20:08:30 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}

#include <stdio.h>
#include  <assert.h>

void del(void *content)
{
    free(content);
}


int	main(void)
{ 
    t_list *lst = ft_lstnew((void*)0);
    assert(lst->content == (void*)0);
    assert(lst->next == NULL);
    assert(ft_lstsize(lst) == 1);
    ft_lstadd_back(&lst, ft_lstnew((void*)1));
    assert(lst->content == (void*)0);
    assert(lst->next->content == (void*)1);
    assert(lst->next->next == NULL);
    assert(ft_lstsize(lst) == 2);
    ft_lstadd_back(&lst, ft_lstnew((void*)2));
    assert(ft_lstsize(lst) == 3);
    ft_lstadd_back(&lst, ft_lstnew((void*)3));
    assert(ft_lstsize(lst) == 4);
    ft_lstdelone(lst->next->next, del);
    assert(ft_lstsize(lst) == 2);
}