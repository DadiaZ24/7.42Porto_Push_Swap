# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 21:05:41 by ddias-fe          #+#    #+#              #
#    Updated: 2024/01/23 21:05:41 by ddias-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f
SRC_DIR = ./src

NAME = push_swap

SRC =	main.c \
		$(SRC_DIR)/data_utils.c \
		$(SRC_DIR)/utils/lst_utils.c \
		$(SRC_DIR)/parser/parser.c \
		$(SRC_DIR)/parser/parser_utils.c \
		$(SRC_DIR)/utils/free_utils.c \
		$(SRC_DIR)/operations/swap.c \
		$(SRC_DIR)/operations/push.c \
		$(SRC_DIR)/operations/rotate_up.c \
		$(SRC_DIR)/operations/rotate_down.c \
		$(SRC_DIR)/algorithm/small.c \

OBJ = $(SRC:.c=.o)

LIBFT = libs/libft/libft.a

all: deps $(NAME)

deps: 
	$(MAKE) -C ./libs/libft

$(NAME): $(OBJ) $(DEPS) $(SRC)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean: 
	$(MAKE) clean -C ./libs/libft
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(LIBFT) $(NAME)

re: fclean all