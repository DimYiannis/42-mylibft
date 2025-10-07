/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiannis <yiannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:46:53 by yiannis           #+#    #+#             */
/*   Updated: 2025/10/07 23:31:01 by yiannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H  
# define FT_H

int	ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void *ft_memset(void *b, int c, size_t len);
int	ft_strlen(char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif 