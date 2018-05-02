# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwolff <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 11:43:57 by hwolff            #+#    #+#              #
#    Updated: 2018/04/12 16:28:17 by hwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: re all clean fclean

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_concat_params.c \
		ft_count_if.c \
		ft_foreach.c \
		ft_is_sort.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memrcpy.c \
		ft_memset.c \
		ft_print_words_tables.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_ultimate_range.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstnew.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstaddback.c \
		ft_lstmap.c

OBJS = $(SRCS:.c=.o)

SRCPATH = ./srcs/

HEADERPATH = ./includes/

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $@ $^ && ranlib $@

%.o: $/srcs/%.c 
	@$(CC) $(CFLAGS) -c $^ -I $(HEADERPATH)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
