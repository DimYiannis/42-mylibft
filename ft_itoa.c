/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiannis <yiannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:35:31 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/13 21:12:58 by yiannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	countDigits(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	num;
	int sign;

	sign = 0;
	num = n;
	if (n < 0)
	{
		num = -num;
		sign = 1;
	}
	len = countDigits(n) + sign;
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (len-- > 0)
	{
		s[len] = num % 10 + '0';
		num /= 10;
		if (sign == 1 && len == 0)
			s[0] = '-';
	}
	return (s);
}

#include <stdio.h>

int	main(void)
{
	printf(" %s", ft_itoa(111));
}