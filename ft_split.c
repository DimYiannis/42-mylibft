/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 23:31:12 by yiannis           #+#    #+#             */
/*   Updated: 2025/10/10 10:52:45 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int count_words(const char *s, char *c)
{
    int count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != *c && !in_word)
        {
            count++;
            in_word = 1;
        }
        else if (*s == *c)
            in_word = 0;
        s++;
    }
    return (count);
}

static int word_length(const char *s, char *c)
{
    int length;

    length = 0;
    while (*s && *s != *c)
    {
        length++;
        s++;
    }
    return (length);
}

char **ft_split(char const *s, char c)
{
    int word_count;
    char **result;
    int i;
    int len;
    int j;

    if (!s)
        return (NULL);
    word_count = count_words(s, &c);
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return (NULL);
    i = 0;
    while (*s)
    {
        if (*s != c)
        {
            len = word_length(s, &c);
            result[i] = (char *)malloc(sizeof(char) * (len + 1));
            if (!result[i])
            {
                while (i-- > 0)
                    free(result[i]);
                free(result);
                return (NULL);
            }
            j = 0;
            while ( j < len)
            {
                result[i][j] = *s++;
                j++;
            }
            result[i][len] = '\0';
            i++;
        }
        else
            s++;
    }
    result[i] = NULL;
    return (result);
}

#include <stdio.h>

int main(void)
{
    char str1[] = "hello-----there";
    char str2[] = "when i wake up in a morning love";
    char **arr1;
    char **arr2;
    int i;

    i = 0;
    arr1 = ft_split(str1, '-');
    while (arr1[i])
    {
        printf("%s", arr1[i]);
        i++;
    }
    printf("\n");
    arr2 = ft_split(str2, ' ');
    while (arr2[i])
    {
        printf("%s", arr2[i]);
        i++;
    }
    return 0;
}