/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:15:45 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/07 11:51:26 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);

}
char	*ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	const char	*haystack;
	const char	*needle;

	haystack = s1;
	needle = s2;
	while (*haystack && n > 0)
	{
		if (*needle == '\0')
		{
			return ((char *)haystack);
		}
		if (*haystack != *needle)
		{
			haystack++;
			n--;
		}
		else if (ft_strncmp(haystack, needle, n) == 0)
		{
			return ((char *)haystack);
		}
		else
		{
			haystack++;
			n--;
		}
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char s1[10] = "aaaabaaa";
	char s2[6] = "";
	printf("%s", ft_strnstr(s1, s2, 6));
}