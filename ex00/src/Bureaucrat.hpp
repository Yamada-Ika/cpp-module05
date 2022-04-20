#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Bureaucrat {
  static const int max_grade = 1;
  static const int min_grade = 150;

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
    class GradeTooHighException : public std::exception {
      virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
      virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs);

#endif
