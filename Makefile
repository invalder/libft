# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 22:45:00 by nnakarac          #+#    #+#              #
#    Updated: 2022/02/23 19:32:19 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MANDATORY	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_isascii.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

BONUS	=	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

SRCS	=	$(MANDATORY)
SRCS_BONUS	=	$(SRCS) $(BONUS)
CC = gcc
CFLAGS	=	-Wall -Werror -Wextra
NAME	=	libft.a
OBJS_M	=	$(SRCS:.c=.o)
OBJS_B	=	$(SRCS_BONUS:.c=.o)

all: $(NAME)

%o: %c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS_M)
	@ar -rcs $(NAME) $(OBJS_M)

bonus: $(OBJS_B)
	@ar -rcs $(NAME) $(OBJS_B)

clean:
	@rm -f $(OBJS_M) $(OBJS_B)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
