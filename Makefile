# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrelli <melchior.grellier42@gmail.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 16:33:55 by megrelli          #+#    #+#              #
#    Updated: 2025/12/08 21:02:18 by megrelli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_printf_utils.c ft_printnbr_uns.c ft_printhexa.c \
ft_printpointer.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -I. -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./Libft
	cp ./Libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./Libft
	rm -f $(OBJS)

fclean:	clean
	$(MAKE) fclean -C ./Libft
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re