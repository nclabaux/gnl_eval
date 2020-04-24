BUFFER_SIZE = 32

NAME = tester

SRCS = ../get_next_line.c\
	   ../get_next_line_utils.c\
	   main.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=$(BUFFER_SIZE)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 
	
all: $(NAME)

clean:
	@$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJSBONUS)
	$(CC) -o $(OBJSBONUS) $(CFLAGS)
	
.PHONY: all clean fclean re
