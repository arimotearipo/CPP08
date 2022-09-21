CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror -fsanitize=address

SRCS = main.cpp

HEADERS = MutantStack.hpp

OBJS = main.o

NAME = mutantstack

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):	$(SRCS) $(HEADERS)
			$(CC) $(FLAGS) $(SRCS) -c

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all