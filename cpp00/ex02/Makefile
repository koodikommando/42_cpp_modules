NAME = a.out
SRCS = tests.cpp \
		Account.cpp

HEADERS = Account.hpp

OBJS = $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98


all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all