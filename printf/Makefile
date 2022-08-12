NAME		= libftprintf.a

SRCS		= ./src/ft_printf.c ./src/ft_printf_utils.c

HEADER		= ft_printf.h 

OBJS		= ${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

all: ${NAME}

.c.o: ${HEADER} Makefile
	cc ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} 
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all



.PHONY: all clean fclean re