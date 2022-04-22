#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) :
        Form("ShrubberyCreationForm", 145, 137), target_("none") {
  std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
        Form("ShrubberyCreationForm", 145, 137), target_(target) {
  std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
  std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
  std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
  this->target_ = other.target_;
  return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form("ShrubberyCreationForm", 145, 137), target_(other.target_) {
  std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
  *this = other;
}

const std::string &ShrubberyCreationForm::getTarget(void) const {
    return target_;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    std::string name = target_ + "_shrubbery";
    std::ofstream ofs(name);
    std::string content;

    if (!getIsSigned()) {
        throw Form::NotSignedException();
    }
    if (!canExec(executor)) {
        throw Form::CannotExecException();
    }
    if (!ofs.good()) {
        throw std::runtime_error("error: Failed to open file.");
    }
    content = ".\n";
    content += "├── Makefile\n";
    content += "├── a.out\n";
    content += "├── obj\n";
    content += "└── src\n";
    content += "    ├── Bureaucrat.cpp\n";
    content += "    ├── Bureaucrat.hpp\n";
    content += "    ├── Form.cpp\n";
    content += "    ├── Form.hpp\n";
    content += "    ├── ShrubberyCreationForm.cpp\n";
    content += "    ├── ShrubberyCreationForm.cpp\n";
    content += "    ├── ShrubberyCreationForm.hpp\n";
    content += "    └── main.cpp\n";
    ofs << content << std::endl;
    if (ofs.bad()) {
        throw std::runtime_error("error: Failed to write to file.");
    }
}

std::ostream& operator<<(std::ostream& lhs, const ShrubberyCreationForm& rhs) {
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
