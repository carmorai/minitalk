NAME = libft.a
SRCS = ft_atoi.c ft_calloc.c ft_itoa.c ft_putchar.c ft_putchar_fd.c ft_reverse_tab.c
		
OBJS =  $(SRCS:.c=.o)
		
CFLAGS = -Wall -Werror -Wextra -I .

all: $(NAME)

$(NAME) : $(OBJS) ./libft.h
	ar rcs $(NAME) $(OBJS) 

%.o : %.c
	gcc -c  $(CFLAGS) $< -o $@

clean:
	rm -f *.o .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all bonus clean fclean re
