/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:35:31 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/13 15:29:41 by ydimitra         ###   ########.fr       */
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

static char	*get_single_dig(char *s, int n, int len)
{
	if (n > 9)
	{
		get_single_dig(s, n / 10, len);
		*s++ = n % 10 + '0';
	}
	else
		*s++ = n + '0';
	s += 1;
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = countDigits(n);
	if (n < 0)
	{
		s = malloc(sizeof(char *) * (len + 2));
		if (!s)
			return (NULL);
		*s = '-';
		get_single_dig(s + 1, -n, len);
	}
	else if (n > 9)
	{
		s = malloc(sizeof(char *) * (len + 1));
		if (!s)
			return (NULL);
		get_single_dig(s, n, len);
	}
	*s = '\0';
	s -= len;
	return (s);
}

#include <stdio.h>

int	main(void)
{
	printf(" %s", ft_itoa(111));
}