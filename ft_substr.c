/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 23:06:50 by yiannis           #+#    #+#             */
/*   Updated: 2025/10/11 15:55:17 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	if (!*s)
		return (NULL);
	s = s + start;
	string = malloc(len + 1);
	if (!string)
		return (NULL);
	while (i < len)
	{
		string[i] = *s;
		s++;
		i++;
	}
	string[i] = '\0';
	return (string);
}

// #include <stdio.h>

// int main()
// {
//    const char s[] = "abcdefghijklmnopqrstuvwxyz";
//     printf("%s", ft_substr(s, 5, 5));
// }