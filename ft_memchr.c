/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 23:36:04 by yiannis           #+#    #+#             */
/*   Updated: 2025/10/16 14:50:20 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char) c;
	while (n--)
	{
		if (*str == ch)
			return ((unsigned *)str);
		str++;
	}
	if (ch == '\0')
		return ((unsigned *)str);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char s[10] = "pa\0ok";
//     char c = '\0';
// 	char *result = ft_memchr(s, c, 4);
//     printf("ft_memchr: %s \n", result);
// 	result = memchr(s, c, 4);
// 	printf("memchr: %s", result);
// }
