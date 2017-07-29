.PHONY: all, clean, fclean, re
.SUFFIXES:

NAME		=	a.out

INC_DIR		=	./includes

EX_SRC		=	~/checker/day05/ex*/*.c
MY_SRC		=	./my/*.c

EX_OBJ		=	$(EX_SRC:.c=.o)
MY_OBJ		=	$(MY_SRC:.c=.o)

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(EX_OBJ) $(EX_SRC) -o $(NAME)

$(OBJ):
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $(EX_SRC) $(MY_SRC) main.c

clean:
	@rm -f $(EX_OBJ)
	@rm -f $(MY_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
