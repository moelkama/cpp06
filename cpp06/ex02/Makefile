OBJS =	main.o Base.o A.o B.o C.o

NAME = cast

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re