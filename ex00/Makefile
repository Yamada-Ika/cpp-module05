CC			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror
COPTS		:= -std=c++98 -pedantic-errors
INCLUDE		:= -I src

NAME	:= a.out
SRCS	:= Bureaucrat.cpp main.cpp
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

test: all
	./a.out

run-low: all
	export IYAMADA_CPP05_EX00_GRADETOOLOWTEST=TRUE; ./a.out
run-high: all
	export IYAMADA_CPP05_EX00_GRADETOOHIGHTEST=TRUE; ./a.out
run-incre: all
	export IYAMADA_CPP05_EX00_INCREGRADETEST=TRUE; ./a.out
run-decre: all
	export IYAMADA_CPP05_EX00_DECREGRADETEST=TRUE; ./a.out

.PHONY: all clean fclean re test
