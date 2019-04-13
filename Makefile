##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 104intersection.c
##

SRC	=	src/main.c	\
		src/tools.c	\

NAME	=	104intersection

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -lm

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re:	fclean all
