#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <string>
#include <exception>

class ShrubberyCreationForm : public Form {
 private:
    std::string target_;

 public:
    ShrubberyCreationForm(void);
    explicit ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

    virtual void execute(Bureaucrat const & executor) const;
    const std::string &getTarget(void) const;
};

std::ostream& operator<<(std::ostream& lhs, const ShrubberyCreationForm& rhs);

#endif
