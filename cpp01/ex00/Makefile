NAME = a.out
SRCS = newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \
		main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Zombie.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all