NAME = phonebook
SRCS = Phonebook.cpp \
		Contact.cpp \
		main.cpp
HEADERS = Contact.hpp \
			Phonebook.hpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address


all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all