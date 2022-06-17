#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <exception>

class Form;

class Bureaucrat {
  static const int kMaxGrade = 1;
  static const int kMinGrade = 150;

 private:
    const std::string name_;
    int grade_;
    bool isGradeTooHigh(void);
    bool isGradeTooLow(void);

 public:
    explicit Bureaucrat(const std::string name, int grade);
    ~Bureaucrat(void);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);

    const std::string &getName(void) const;
    int getGrade(void) const;
    void increGrade(void);
    void decreGrade(void);
    void signForm(Form &f);
    void executeForm(Form const & form);

    class GradeTooHighException : public std::exception {
      virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
      virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs);

#endif
