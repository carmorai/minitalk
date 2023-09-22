SERVER = server

CLIENT = client

LIBFT_DIR = libft

PRINTF_DIR = printf_nolib

LIBFT =  $(LIBFT_DIR)/libft.a

PRINTF =  $(PRINTF_DIR)/libftprintf.a

L_SRCS = $(addprefix $(LIBFT_DIR)/, ft_atoi.c ft_calloc.c ft_itoa.c	ft_putchar.c ft_putchar_fd.c ft_reverse_tab.c )
		
L_OBJS =  $(L_SRCS:.c=.o)

PRINTF_SRCS = $(addprefix $(PRINTF_DIR)/, ft_printf.c ft_putchar.c )

PRINTF_OBJS =  $(PRINTF_SRCS:.c=.o)

CLIENT_SRCS = client.c aux_binary.c

CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

SERVER_SRCS = server.c

SERVER_OBJS = $(SERVER_SRCS:.c=.o)

CFLAGS = -I . 

CFLAGS += -fsanitize=address

all: $(SERVER) $(CLIENT)

$(SERVER) : $(SERVER_OBJS) $(LIBFT) $(PRINTF) minitalk.h
	gcc $(CFLAGS) -o $(SERVER) $(SERVER_OBJS) -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf

$(CLIENT) : $(CLIENT_OBJS) $(LIBFT) $(PRINTF) minitalk.h
	gcc $(CFLAGS) -o $(CLIENT) $(CLIENT_OBJS) -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf

%.o : %.c
	gcc -c  $(CFLAGS) $< -o $@

$(LIBFT): $(L_OBJS)

$(PRINTF) : $(PRINTF_OBJS)

$(LIBFT_DIR)/%.o : $(LIBFT_DIR)/%.c
	@make -C $(LIBFT_DIR)

$(PRINTF_DIR)/%.o : $(PRINTF_DIR)/%.c
	@make -C $(PRINTF_DIR)

clean:
	@rm -f *.o
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(PRINTF_DIR)

fclean: clean
	@rm -f $(CLIENT) $(SERVER)
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(PRINTF_DIR)

re: fclean all

.PHONY: clean all bonus clean fclean re