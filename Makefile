# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:11:44 by alouribi          #+#    #+#              #
#    Updated: 2023/11/26 17:44:34 by alouribi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCF = ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlen.c ft_toupper.c ft_atoi.c ft_isalpha.c ft_isprint.c ft_memset.c \
ft_strncmp.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
ft_strdup.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strjoin.c ft_substr.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c 

SRCB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJF  = $(SRCF:.c=.o)

OBJB = $(SRCB:.c=.o)

all: $(NAME)

$(NAME): $(OBJF)
	ar rc $@ $(OBJF)

bonus: $(OBJB)
	ar rc $(NAME) $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJF) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re