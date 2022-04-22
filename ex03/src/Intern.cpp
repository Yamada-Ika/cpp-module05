#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

Intern::Intern(void) {
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern(void) {
    std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
    std::cout << "Intern assignation operator called" << std::endl;
    (Intern)other;
    return *this;
}

Intern::Intern(const Intern& other) {
    std::cout << "Intern copy constructor called" << std::endl;
    *this = other;
}

Form *Intern::newShrubberyForm(const std::string target) {
    return new ShrubberyCreationForm(target);
}

Form *Intern::newPresidentialForm(const std::string target) {
    return new PresidentialPardonForm(target);
}

Form *Intern::newRobotomyForm(const std::string target) {
    return new RobotomyRequestForm(target);
}

Form *Intern::makeForm(const std::string form_name, const std::string target) {
    std::string form_names[3] = {
        "shrubbery creation",
        "presidential pardon",
        "robotomy request"
        };
    Form* (Intern::*forms[3])(const std::string) = {
            &Intern::newShrubberyForm,
            &Intern::newPresidentialForm,
            &Intern::newRobotomyForm,
        };

    for (int i = 0; i < form_num; i++) {
        if (form_name == form_names[i]) {
            return (this->*forms[i])(target);
        }
    }
    throw NoSuchFormException();
}

const char* Intern::NoSuchFormException::what() const throw() {
  return "Intern::NoSuchFormException";
}

