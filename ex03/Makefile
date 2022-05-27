CC		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror
COPTS	:= -std=c++98 -pedantic-errors #-g -fsanitize=address
INCLUDE	:= -I src

NAME	:= a.out
SRCS	:= Bureaucrat.cpp             Intern.cpp                 RobotomyRequestForm.cpp    main.cpp\
Form.cpp                   PresidentialPardonForm.cpp ShrubberyCreationForm.cpp
OBJS	:= $(SRCS:%.cpp=%.o)
SRCS	:= $(addprefix src/, $(SRCS))
OBJS	:= $(addprefix obj/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CXXFLAGS) $(COPTS) $(INCLUDE) $(OBJS)

obj/%.o: src/%.cpp
	$(CC) $(CXXFLAGS) $(COPTS) $(INCLUDE) -o $@ -c $^

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
