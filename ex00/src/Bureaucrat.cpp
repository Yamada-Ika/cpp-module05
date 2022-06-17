#include "Bureaucrat.hpp"
#include <iostream>

bool Bureaucrat::isGradeTooHigh() {
    return grade_ < kMaxGrade;
}

bool Bureaucrat::isGradeTooLow() {
    return grade_ > kMinGrade;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name), grade_(grade) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
    if (isGradeTooHigh()) {
        throw GradeTooHighException();
    }
    if (isGradeTooLow()) {
        throw GradeTooLowException();
    }
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    std::cout << "Bureaucrat assignation operator called" << std::endl;

    if (this == &other) return *this;

    this->grade_ = other.grade_;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = other;
}

const std::string &Bureaucrat::getName() const {
    return name_;
}

int Bureaucrat::getGrade() const {
    return grade_;
}

void Bureaucrat::increGrade() {
    grade_--;
    if (isGradeTooHigh()) {
        throw GradeTooHighException();
    }
}

void Bureaucrat::decreGrade() {
    grade_++;
    if (isGradeTooLow()) {
        throw GradeTooLowException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "GradeTooLowException";
}

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs) {
    lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return lhs;
}
