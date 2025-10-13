/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:15:45 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/13 10:32:44 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char	*haystack;
	const char	*needle;
	size_t		needle_len;

	haystack = s1;
	needle = s2;
	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && n > 0)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		else
		{
			haystack++;
			n--;
		}
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[10] = "aaaabaaa";
// 	char	s2[6] = "ab";
// 	printf("%s", ft_strnstr(s1, s2, 6));
// }