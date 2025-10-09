/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:29:50 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/09 18:15:59 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp = '\0';
		tmp++;
		n--;
	}
}

void *calloc(size_t count, size_t size)
{
    if (!count || !size)
	{
		return (NULL);
	}
	count = (size_t)malloc(sizeof(size_t) * size);
	if (!count)
	{
		return (NULL);
	}
	ft_bzero((void *)count, size);
	return ((void *)count);
}

#include <stdio.h>

int main(void)
{
	char s1[] = "paokara";
	char s2[] = calloc((size_t)s1+4,sizeof(char) * 3);
	printf("%s", s2);
	free(s2);
	return (0);
}