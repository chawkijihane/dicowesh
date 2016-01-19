##
## Makefile for makefile in /home/jihane/lib/chawki_j/libmy_01
## 
## Made by CHAWKI Jihane
## Login   <chawki_j@etna-alternance.net>
## 
## Started on  Fri Oct 23 16:16:59 2015 CHAWKI Jihane
## Last update Sat Nov  7 12:43:01 2015 CHAWKI Jihane
##
cc	= gcc
NAME	= dicowesh
AR	= ar r
SRC	= $(wildcard *.c)
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all