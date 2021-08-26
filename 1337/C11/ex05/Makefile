SRCSDIR		=	srcs

INCDIR		=	includes

SRCS		=	main.c ${SRCSDIR}/*.c

NAME		=	do-op

GCC			=	gcc

FLAGS		=	-Wextra -Wall -Werror

RM			=	rm -rf

${NAME}:
			${GCC} ${FLAGS} -o ${NAME} ${SRCS}

all:		${NAME}

clean:
			${RM} ${SRCSDIR}/*.o

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re