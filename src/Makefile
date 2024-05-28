
NAME		= libft.a
SRCS		= ft_isalpha.c ft_toupper.c ft_atoi.c ft_itoa.c
OBJS		= ${SRCS:.c=.o}
CFLAGS		= 

all:		${NAME}

${NAME}:	${OBJS}
			ar crs ${NAME} ${OBJS}

${OBJS}:
			cc ${CFLAGS} -I . -c ${SRCS}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

