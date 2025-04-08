NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c handle_format.c print_Hexa.c print_address.c print_char.c print_hex.c \
	print_nbr.c print_string.c print_unsigned.c
	
OBJS	= $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(AR) -r $(NAME) $? 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re