##
## EPITECH PROJECT, 2019
## Project
## File description:
## Makefile
##

SRC		=		src/main.c\
				src/print_help.c\
				src/param_check.c\
				src/default_key_config.c\
				src/game_loop.c\
				src/generate_map.c\
				src/print_map_screen.c\
				src/load_tetrimilist.c\
				src/random_tetrimino.c\
				src/print_tetrimino.c

OBJ		=		$(SRC:%.c=%.o)

NAME	=		tetris

CFLAGS	=		-Wall -Wshadow -lmy -L./lib/my -I./include -lncurses

LDFLAGS	=

CC 		=		gcc

all:	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C ./lib/my
		$(CC) $(SRC) $(LDFLAGS) $(CFLAGS) -o $(NAME)

debug: CFLAGS += -g
debug: fclean all

clean:
		$(RM) /src/*.o
		$(RM) $(OBJ)
		make -C ./lib/my clean

fclean: clean
		$(RM) $(NAME)
		make -C ./lib/my fclean

re:		fclean all

.PHONY: all clean fclean re
