/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:40:37 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/14 10:15:19 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *header;
    int data;

    data = content;
    header = (struct s_list *)malloc(sizeof(t_list));
    if (!header)
        return (NULL);
    header->content = data;
    header->next = NULL;
    return (header);
}

#include <stdio.h>

int main(void)
{
    t_list *head;
    if (!head)
    {
        printf("empty");
        return 0;
    }
    int n = 6;
    head = ft_lstnew(&n);
    printf("%d", head->content);
}