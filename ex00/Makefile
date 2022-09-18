CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

SRCS = easyfind.hpp main.cpp

OBJS = easyfind.hpp.gch main.o

NAME = easyfind

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all