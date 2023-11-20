NAME 		=	libftprintf.a

SOURCES 	=	ft_printf.c \
				ft_printhex.c \
				ft_printnbr.c \
				ft_printstr.c \
				ft_printunsigned.c \
				ft_print_format.c \
				ft_printptr.c \
				recursive_count.c

OBJECTS 	=	$(SOURCES:%.c=%.o)

LIB_DIR		=	Libft
LIB 		=	$(LIB_DIR)/libft.a

CFLAGS 		=	-Wall -Wextra -Werror

.PHONY: all clean fclean re LIB bonus

all: 			$(NAME)

$(NAME):		$(OBJECTS)
				make all -C $(LIB_DIR)
				cp $(LIB) $(NAME)
				ar -rcs $(NAME) $(OBJECTS)

$(OBJECTS): 	$(SOURCES)
				cc $(CFLAGS) -c $(SOURCES)

clean:
				make clean -C $(LIB_DIR)
				rm -f $(OBJECTS)

fclean: 		clean
				make fclean -C $(LIB_DIR)
				rm -rf $(NAME)

re: 			fclean $(NAME)
