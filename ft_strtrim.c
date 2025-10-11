/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:01:00 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/11 17:35:10 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	occurance(const char *s1, const char *set)
{
    size_t	lenset;
	size_t	count;
    size_t	i;
    size_t j;

    j = 0;
    count = 0;
    i = 0;
    lenset = ft_strlen(set);
	while (*s1)
	{
		while (i < lenset)
		{
			if (set[i] == s1[j])
			{
				count++;
				i++;
			}
			i++;
		}
		i = 0;
		j++;
	}
    return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
    size_t i;

	if (!*s1)
		return (NULL);
	s2 = malloc((ft_strlen(s1) - occurance(s1, set)) + 1);
    if (!*s2)
        return (NULL);
    i = 0;
    while (*s1)
    {
        if (ft_strchr(set, *s1) != NULL)
        {
            s2[i] = *s1;
            i++;
        }   
        s1++; 
    }
    return (s2);
}


#include <stdio.h>

int main()
{
    const char s[] = "abcdefghijklmnopqrstuvwxyz";
    const char set[] = "ajlqz";
    printf("%s", ft_strtrim(s, set));
}