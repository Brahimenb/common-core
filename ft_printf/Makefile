
CC = cc
NAME = libftprintf.a

# CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

SRCS = ft_printf.c \
       ft_printf_char.c \
       ft_printf_nbr.c \
       ft_printf_hex.c \
       ft_printf_format.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
