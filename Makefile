#c CFLAGS et pas FDHIOJ#

NAME = libft.a
SRC = ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_atoi.c ft_calloc.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strrchr.c ft_strdup.c ft_strchr.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_tolower.c ft_toupper.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_memset.c ft_strlen.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
.c.o:
	$(CC) $(CFLAGS) $< -c -o $@
clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(NAME)
re: fclean all
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re
