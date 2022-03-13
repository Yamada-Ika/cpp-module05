#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

// It must have a constant name, and a grade, that ranges from 1 (highest possible) to
// 150 (lowest possible). Any attempt to create a Bureaucrat with an invalid grade must
// throw an exception, which will be either a Bureaucrat::GradeTooHighException or a
// Bureaucrat::GradeTooLowException.
// You will provide getters for both these attributes (getName and getGrade), and two
// functions to increment or decrement the grade. Both these functions will throw the same
// exceptions as before if the grade gets too high or too low. Remember, grade 1 is highest,
// 150 is lowest, so incrementing a grade 3 gives you a grade 2...

class Bureaucrat : std::exception {
 private:
    std::string name_;
    int grade_;

 public:
    explicit Bureaucrat(int grade);
    ~Bureaucrat(void);
    const std::string &getName(void) const;
    const int getGrade(void) const;
    void  increGrade(void);
    void  decreGrade(void);
    const std::string &GradeTooHighException(void) const throw();
    const std::string &GradeTooLowException(void) const throw();
};

#endif
