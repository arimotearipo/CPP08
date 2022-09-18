CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Span.cpp

OBJS = $(SRCS:.cpp=.o)

HEADER = Span.hpp

NAME = span

all:	$(NAME)

$(NAME):	$(OBJS) $(HEADER)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):	$(SRCS) $(HEADER)
			$(CC) $(FLAGS) $(SRCS) -c

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)


re:			fclean all