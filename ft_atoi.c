/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiannis <yiannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:15:58 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/07 22:34:34 by yiannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
	{
		return (1);
	}
	return (0);
}

static int	ft_isnum(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	counter;

	counter = 0;
	sign = 0;
	num = 0;
	while (ft_isspace(*str) == 1)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		counter++;
		str++;
	}
	while (ft_isnum(*str) == 1)
	{
		num = num * 10;
		num = num + (*str - 48);
		str++;
	}
	if (counter > 1)
		return (0);
	return (num * sign);		
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int val;
	char *str;
	str = "+---15+09.10E";
	val = ft_atoi(str);
	printf("integral number = %d \n", val);
	val = atoi(str);
	printf("integral number = %d", val);
}