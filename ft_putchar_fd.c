/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiannis <yiannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:50:05 by ydimitra          #+#    #+#             */
/*   Updated: 2025/10/13 22:50:13 by ydimitra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
// #include <fcntl.h>

// int main(void)
// {
//     int fd = open("test.txt", O_WRONLY);
//     ft_putchar_fd('a', fd);
//     close(fd);
// }