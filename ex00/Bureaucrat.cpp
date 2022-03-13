#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade) : grade_(grade) {
  std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
  std::cout << "Bureaucrat destructor called" << std::endl;
}

const std::string &Bureaucrat::getName(void) {
  return name_;
}
