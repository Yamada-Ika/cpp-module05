#include "Form.hpp"
#include <iostream>

bool Form::isGradeTooHigh(int grade) {
  return (grade < max_grade);
}

bool Form::isGradeTooLow(int grade) {
  return (grade > min_grade);
}

Form::Form(const std::string name, int grade_to_sign, int grade_to_execute) : name_(name),
            grade_to_sign_(grade_to_sign), grade_to_execute_(grade_to_execute), is_signed(false) {
  std::cout << "Form default constructor called" << std::endl;
  if (isGradeTooHigh(grade_to_sign) || isGradeTooHigh(grade_to_execute)) {
    throw GradeTooHighException();
  }
  if (isGradeTooLow(grade_to_sign) || isGradeTooLow(grade_to_execute)) {
    throw GradeTooLowException();
  }
}

Form::~Form(void) {
  std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form& other) {
  std::cout << "Form assignation operator called" << std::endl;
  if (this != &other) {
    this->is_signed = other.is_signed;
  }
  return *this;
}

Form::Form(const Form& other) : name_(other.name_),
            grade_to_sign_(other.grade_to_sign_), grade_to_execute_(other.grade_to_execute_),
            is_signed(other.is_signed) {
  std::cout << "Form copy constructor called" << std::endl;
  *this = other;
}

const std::string &Form::getName(void) const {
  return name_;
}

void Form::beSigned(const Bureaucrat& b) {
  if (grade_to_sign_ >= b.getGrade()) {
    is_signed = true;
    return ;
  }
  throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
  return "Form::GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw() {
  return "Form::GradeTooLowException";
}

// std::ostream& operator<<(std::ostream& lhs, const Form& rhs) {
//   // lhs << rhs.getName();
//   // lhs << ", bureaucrat grade ";
//   // lhs << rhs.getGrade();
//   // lhs << ".";
//   return lhs;
// }
