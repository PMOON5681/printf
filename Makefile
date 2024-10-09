NAME				=		libftprintf.a
NAME_LIBFT			=		libft.a
LOCAL_SRC_PATH		=		srcs
LOCAL_HEADER_PATH	=		includes
LOCAL_LIBFT_PATH	=		./libft

PRINTF_SRC			=	ft_printf.c \
						ft_printf_char.c \
						ft_printf_decimal.c \
						ft_printf_hex.c \
						ft_printf_pointer.c \
						ft_printf_string.c \
						ft_printf_unsigned_decimal.c

CC 					= 	cc
CFLAGS		 		= 	-Wall -Werror -Wextra -I $(LOCAL_HEADER_PATH)

OBJS				=	$(PRINTF_SRC:.c=.o)

all:				$(NAME)
make_libft:
					@make -C $(LOCAL_LIBFT_PATH)
					@cp $(LOCAL_LIBFT_PATH)/libft.a $(NAME_LIBFT)
					@mv $(NAME_LIBFT) $(NAME)

$(NAME):			make_libft $(OBJS)
					ar -rc $(NAME) $(OBJS)

clean:
					@rm -rf $(OBJS)
					@cd $(LOCAL_LIBFT_PATH) && make clean

fclean:				clean
					@rm -rf $(NAME)
					@cd $(LOCAL_LIBFT_PATH) && make fclean

re: fclean all

.PHONY: all clean fclean re make_libft