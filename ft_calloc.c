/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiannis <yiannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:29:50 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/09 23:20:32 by yiannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = '\0';
}

void *calloc(size_t count, size_t size)
{
	void *ptr;
	
    if (count == 0 || size == 0)
		return (NULL);
	if (size != 0 && count * size > SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero((void *)count, size);
	return ((void *)count);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s1[] = "paokara";
// 	char s2[] = calloc((size_t)s1+4,sizeof(char) * 3);
// 	printf("%s", s2);
// 	free(s2);
// 	return (0);
// }