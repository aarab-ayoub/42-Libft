# -*- MakeFile -*-

NAME = libft.a

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRC = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c \
      ft_strlcat.c ft_toupper.c ft_tolower.c ft_strncmp.c \
      ft_strchr.c ft_strrchr.c ft_memset.c ft_memcpy.c \
      ft_memmove.c ft_memcmp.c ft_bzero.c ft_memchr.c \
      ft_strnstr.c ft_calloc.c ft_strdup.c

# Object files
OBJ = $(SRC:.c=.o)

# Default rule
all: $(NAME)

# Create the static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile the source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJ)

# Clean up the library and object files
fclean: clean
	rm -f $(NAME)

# Rebuild the library
re: fclean all

# Include bonus rules
bonus: $(BONUS)

# Phony targets
.PHONY: all clean fclean re bonus
