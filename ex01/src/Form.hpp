#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <exception>

class Bureaucrat;

class Form {
  static const int max_grade = 1;
  static const int min_grade = 150;

 private:
    const std::string name_;
    const int grade_to_sign_;
    const int grade_to_execute_;
    bool is_signed;
    bool isGradeTooHigh(int grade);
    bool isGradeTooLow(int grade);

 public:
    explicit Form(const std::string name, int grade_to_sign, int grade_to_execute);
    ~Form(void);
    Form(const Form& other);
    Form& operator=(const Form& other);

    const std::string &getName(void) const;
    void beSigned(const Bureaucrat& b);

    class GradeTooHighException : public std::exception {
      virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
      virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& lhs, const Form& rhs);

#endif
