# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 09:53:02 by bducrocq          #+#    #+#              #
#    Updated: 2022/11/21 00:38:56 by bducrocq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DEBUG=0

CC = gcc
CFLAGS      := -Wall -Wextra -Werror
SANITIZE    :=# -fsanitize=address
LLDBFLAG    := -g3

AR = ar rcs
RM = rm -f
HEADER = libft.h

FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strjoin_max \
		ft_concat \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putstr_fd \
		ft_putstr \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_putnbr \
		ft_putchar_fd \
		ft_putchar \
		ft_intlen \
		ft_putunnbr \
		ft_putunnbr_fd \
		ft_isspace \
		ft_lstnew \
		ft_lstadd_front \
		ft_lstsize \
		ft_lstlast \
		ft_lstadd_back \
		ft_lstdelone \
		ft_lstclear \
		ft_lstiter \
		ft_lstmap

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -g3 -c -o $@ $< 

$(NAME): $(OBJS) ./Makefile
	$(AR) $@ $^


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re