/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 23:11:23 by yiannis           #+#    #+#             */
/*   Updated: 2025/10/11 17:39:22 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (*s)
	{
		if (s[i] == (char)c)
			return ((char *)s+i);
		i++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     char s[10] = "paok";
//     char c = 'a';
//     printf("%s", ft_strchr(s, c));
// }