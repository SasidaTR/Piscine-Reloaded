# Nom de la bibliothèque
NAME = libft.a

# Répertoires
SRCS_DIR = srcs
INCLUDES_DIR = includes

# Fichiers sources
SRCS = $(SRCS_DIR)/ft_putchar.c \
       $(SRCS_DIR)/ft_putstr.c \
       $(SRCS_DIR)/ft_strcmp.c \
       $(SRCS_DIR)/ft_strlen.c \
       $(SRCS_DIR)/ft_swap.c

# Fichiers objets
OBJS = $(SRCS:.c=.o)

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_DIR)

# Règle par défaut
all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJS)
	ar rcs $@ $^

# Règle pour les fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Supprime les fichiers objets
clean:
	rm -f $(OBJS)

# Supprime les fichiers objets et la bibliothèque
fclean: clean
	rm -f $(NAME)

# Supprime tout et recompile
re: fclean all

# Indique au make que ces cibles ne sont pas des fichiers
.PHONY: all clean fclean re
