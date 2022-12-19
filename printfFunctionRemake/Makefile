NAME            =libftprintf.a
SRCS            =ft_printf.c ft_putchar.c ft_printstr.c ft_pointer.c ft_unsigned.c ft_x.c ft_putnbr.c ft_upx.c
                
OBJS            = $(SRCS:.c=.o)

CC              = gcc
RM              = rm -rf
CFLAGS          = -Wall -Wextra -Werror -I.

all:            $(NAME)
$(NAME):        $(OBJS)
				ar rcs $(NAME) $(OBJS)
clean:          
				$(RM) $(OBJS) 
fclean:         clean
				$(RM) $(NAME)
re:				fclean $(NAME) 

.PHONY:         all clean fclean re bonus
