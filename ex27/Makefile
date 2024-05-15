SRC = ft_display_file.c

NAME = ft_display_file

OBJ = ${SRC:.c=.o}

CC = cc -Wall -Wextra -Werror

%.o: %.c
	${CC} -c $< -o $@

${NAME}: ${OBJ}
	${CC} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean a;;

.PHONY: all clean fclean re
