# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kana <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/31 14:39:05 by kana              #+#    #+#              #
#    Updated: 2017/07/31 14:40:23 by kana             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re
.SUFFIXES:

NAME=checker

SRCS_DIR=./srcs
RECS_DIR=./receip
INC_DIR=includes/

RAW_RECS=\
		 ft_strdup.c

RAW_SRCS=\
		 tools.c\
		 main.c

SRCS=$(addprefix $(SRCS_DIR)/,$(RAW_SRCS))
RECS=$(addprefix $(RECS_DIR)/,$(RAW_RECS))

CC=gcc
CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):  
	@$(CC) $(CFLAGS) -I $(INC_DIR) $(SRCS) $(RECS) -o $(NAME) 

clean:
	@rm -f 

fclean: clean
	@rm -f $(NAME)

re: fclean all
