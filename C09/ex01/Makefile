SRCSDIR		=	srcs

INCDIR		=	includes

SRCS		=	${SRCSDIR}/ft_putchar.c ${SRCSDIR}/ft_swap.c ${SRCSDIR}/ft_putstr.c ${SRCSDIR}/ft_strlen.c ${SRCSDIR}/ft_strcmp.c

OBJS		=	${SRCS:.c=.o}

LIB			=	libft.a

GCC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

.c.o:
			${GCC} ${CFLAGS} -c -I${INCDIR} -c $< -o ${<:.c=.o}

${LIB}:		${OBJS}
			ar rc ${LIB} ${OBJS}
			ranlib ${LIB}

all:		${LIB}

clean:		
			${RM} ${OBJS}
			
fclean:		clean
			${RM} ${LIB}

re:			fclean all

.PHONY:		all clean fclean re