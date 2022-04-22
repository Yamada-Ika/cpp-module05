#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) :
        Form("RobotomyRequestForm", 72, 45), target_("none") {
  std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
        Form("RobotomyRequestForm", 72, 45), target_(target) {
  std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
  std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
  std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
  this->target_ = other.target_;
  return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form("RobotomyRequestForm", 72, 45), target_(other.target_) {
  std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
  *this = other;
}

const std::string &RobotomyRequestForm::getTarget(void) const {
    return target_;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned()) {
        throw Form::NotSignedException();
    }
    if (!canExec(executor)) {
        throw Form::CannotExecException();
    }
    std::srand(std::time(nullptr));
    std::cout << "drilllllllling ..." << std::endl;
    if (rand() % 2 == 0) {
        std::cout << target_ + " has been robotomized" << std::endl;
    } else {
        std::cout << target_ + ", failed to be robotomized" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& lhs, const RobotomyRequestForm& rhs) {
    lhs << "Target : ";
    lhs << rhs.getTarget();
    lhs << ", ";
    lhs << "Name : ";
    lhs << rhs.getName();
    lhs << ", ";
    lhs << "Grade to sign : ";
    lhs << rhs.getGradeToSign();
    lhs << ", ";
    lhs << "Grade to execute : ";
    lhs << rhs.getGradeToExecute();
    lhs << ", ";
    return lhs;
}
