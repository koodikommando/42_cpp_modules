NAME = a.out
SRCS = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
HEADERS = HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp
OBJS = $(SRCS:.cpp=.o)
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