/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 23:59:41 by yiannis           #+#    #+#             */
/*   Updated: 2025/10/08 10:57:20 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n > 0)
	{
		*pdst++ = *psrc++;
		n--;
	}
	return (dst);
}

// #include <stdio.h>

// int main(void)
// {
//     char dst[10] = "aris";
//     char src[10] = "paok";
//     ft_memcpy(dst, src, 3);
//     printf("%s", dst);
// }