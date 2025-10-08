/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiannis <yiannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:44:14 by yiannis           #+#    #+#             */
/*   Updated: 2025/10/08 22:06:38 by yiannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

    if (!dst && !src)
		return (NULL);    
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n--)
		*pdst++ = *psrc++;
	return (dst);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_len = 0;
    const char *ptr;
    
    ptr = src;
    while (*ptr++)
        src_len++;
    if (dstsize == 0) 
        return (src_len);
    if (dstsize > src_len + 1)
        ft_memcpy(dst, src, src_len + 1);
    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize-1] = '\0';
    }
    return (src_len);
}

// #include <stdio.h>

// // int main(void)
// // {
// // 	char dest[5];
// // 	size_t len = ft_strlcpy(dest, "paokara", sizeof(dest));
// // 	printf("dest = \"%s\", returned len = %zu\n", dest, len);
// // }
