#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

bool Bureaucrat::isGradeTooHigh(void) {
  return (grade_ < kMaxGrade);
}

bool Bureaucrat::isGradeTooLow(void) {
  return (grade_ > kMinGrade);
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name) ,grade_(grade) {
  std::cout << "Bureaucrat default constructor called" << std::endl;
  if (isGradeTooHigh()) {
    throw GradeTooHighException();
  }
  if (isGradeTooLow()) {
    throw GradeTooLowException();
  }
}

Bureaucrat::~Bureaucrat(void) {
  std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
  std::cout << "Bureaucrat assignation operator called" << std::endl;
  if (this != &other) {
    this->grade_ = other.grade_;
  }
  return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
  std::cout << "Bureaucrat copy constructor called" << std::endl;
  *this = other;
}

const std::string &Bureaucrat::getName(void) const {
  return name_;
}

int Bureaucrat::getGrade(void) const {
  return grade_;
}

void Bureaucrat::increGrade(void) {
  grade_--;
  if (isGradeTooHigh()) {
    throw GradeTooHighException();
  }
}

void Bureaucrat::decreGrade(void) {
  grade_++;
  if (isGradeTooLow()) {
    throw GradeTooLowException();
  }
}

void Bureaucrat::signForm(Form &f) {
  try {
    f.beSigned(*this);
    std::cout << name_ + " signed " + f.getName() << std::endl;
  }
  catch (std::exception &e) {
    std::cout << name_ + " couldn't sign " + f.getName() + " because " + e.what() + "." << std::endl;
  }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return "GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return "GradeTooLowException";
}

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs) {
  lhs << rhs.getName();
  lhs << ", bureaucrat grade ";
  lhs << rhs.getGrade();
  lhs << ".";
  return lhs;
}
