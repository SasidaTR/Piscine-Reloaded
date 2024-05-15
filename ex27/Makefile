# Nom du binaire
NAME = ft_display_file

# Fichiers source
SRCS = ft_display_file.c

# Fichiers objets
OBJS = $(SRCS:.c=.o)

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Règle par défaut
all: $(NAME)

# Compilation du binaire
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Règle pour les fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyage des fichiers objets et du binaire
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

# Indication que ces cibles ne sont pas des fichiers
.PHONY: all clean fclean re
