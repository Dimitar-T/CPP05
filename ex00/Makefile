NAME = bureaucrat
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp Bureucrat.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all

party:
	curl parrot.live

.PHONY: all clean fclean re party