# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 09:01:22 by ydimitra          #+#    #+#              #
#    Updated: 2025/10/16 11:25:57 by ydimitra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

NAME = libft.a

HEADER = libft.h

SRC =  ft_isdigit.c ft_lstmap.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c \
ft_isprint.c ft_putendl_fd.c  ft_strlcat.c  ft_substr.c \
ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c \
ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c  
ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c \
OBJ = $(SRC:.c = .o)

BONUS_SRC = ft_lstnew.c ft_lstsize.c  ft_lstadd_back.c ft_lstadd_front.c \
ft_lstclear.c ft_lstdelone.c ft_lstiter.c
BONUS_OBJ = $(BONUS_SRC:.c = .o)
	
$%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)	

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)	

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus #for filename conflicts#