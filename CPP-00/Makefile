NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = 	Contact.cpp \
	PhoneBook.cpp \
	phoneBookMain.cpp
	
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


