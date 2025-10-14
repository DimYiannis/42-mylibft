/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:40:37 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/14 09:59:49 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    struct s_list *newnode;
    struct s_list *tmp;

    newnode = (struct s_list *)malloc(sizeof(struct s_list));
    if (!newnode)
        return (NULL);
    newnode->content = t_list->content;
    newnode->next = NULL;
    return (newnode);
}

#include <stdio.h>

int main(void)
{
    struct t_list *tmp;
    int n = 6;
    tmp = ft_lstnew(n);
    printf("%d", tmp.content);
}