# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbbot <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 18:40:58 by fbbot             #+#    #+#              #
#    Updated: 2023/12/01 12:04:40 by fbbot            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Wextra -Werror 
SRCS := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_toupper.c ft_tolower.c ft_atoi.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c ft_bzero.c \
ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
ft_split.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_itoa.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strmapi.c ft_striteri.c 
OBJS := $(SRCS:%.c=%.o)
BSRCS := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BOBJS := $(BSRCS:.c=.o)

.PHONY : all bonus clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus : $(BOBJS)
	ar rcs $(NAME) $(BOBJS)

clean :
	rm -rf $(OBJS) $(BOBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
