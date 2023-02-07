##
## EPITECH PROJECT, 2022
## workshop_bash
## File description:
## Makefile
##

NAME	=	do_op

CFLAGS	=	-Werror -Wextra

CPPFLAGS += 	-I./include

SDIR	=	sources

SRC		=	$(SDIR)/operations.c	\
			$(SDIR)/my_do_op.c

MAIN	=	$(SDIR)/main.c

OBJ		=	$(SRC:.c=.o) \
			$(MAIN:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o  $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

debug:	CFLAGS += -g3

debug: $(all)

.PHONY: all clean fclean re debug