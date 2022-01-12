# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yplag <yplag@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/03 19:59:18 by yplag             #+#    #+#              #
#    Updated: 2015/04/03 19:59:19 by yplag            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = computor 

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/

SRCS = main.c \
	   forme_reduite.c\
	   degree_polynomiale.c\
	   ft_atod.c\
	   imp_forme_reduite.c\
	   resolution_equation.c

#shell colors#
RESET = \033[00m
GREEN = \033[32m
RED = \033[31m
YELLOW = \033[33m

SRCO = $(SRCS:.c=.o)

.PHONY: clean fclean all

all: $(SRCO)
	@make -C libft
	@echo -n Linking:
	@$(CC) -o $(NAME) $(SRCO) libft/libft.a
	@echo "$(GREEN) done$(RESET)"

%.o: %.c
	@echo -n Compilation of $< :
	@$(CC) -o $@ -c $< $(CFLAGS)
	@echo "$(GREEN) done$(RESET)"

lib:
	@make -C $(LIBFT)
#@echo "$(GREEN)libft is up to date.$(RESET)"

clean :
	@echo -n Removing objects:
	@rm -f $(SRCO)
	@echo "$(GREEN) done$(RESET)"

fclean : clean
	@echo -n Removing binary:
	@rm -f $(NAME)
	@make fclean -C libft

re : fclean all
