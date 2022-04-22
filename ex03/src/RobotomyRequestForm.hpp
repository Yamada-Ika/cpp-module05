#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>
#include <exception>

class RobotomyRequestForm : public Form {
 private:
    std::string target_;

 public:
    RobotomyRequestForm(void);
    explicit RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    virtual void execute(Bureaucrat const & executor) const;
    const std::string &getTarget(void) const;
};

std::ostream& operator<<(std::ostream& lhs, const RobotomyRequestForm& rhs);

#endif
