CC		:= c++
CFLAGS	:= -Wall -Wextra -Werror
COPTS	:= -std=c++98 -pedantic-errors #-g -fsanitize=address
INCLUDE	:= -I src

NAME	:= a.out
SRCS	:= Bureaucrat.cpp             RobotomyRequestForm.cpp\
Form.cpp                   ShrubberyCreationForm.cpp\
PresidentialPardonForm.cpp main.cpp
OBJS	:= $(SRCS:%.cpp=%.o)
SRCS	:= $(addprefix src/, $(SRCS))
OBJS	:= $(addprefix obj/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(COPTS) $(INCLUDE) $(OBJS)

obj/%.o: src/%.cpp
	$(CC) $(CFLAGS) $(COPTS) $(INCLUDE) -o $@ -c $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

sh: all
	./a.out -ShrubberyCreationForm
ro: all
	./a.out -RobotomyRequestForm
pr: all
	./a.out -PresidentialPardonForm

.PHONY: all clean fclean re test
