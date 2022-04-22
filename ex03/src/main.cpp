#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

void ShrubberyCreationFormNormalTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {

  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void ShrubberyCreationFormNotSignedTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {

  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void ShrubberyCreationFormLessExecGradeTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {

  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void ShrubberyCreationFormLessSignGradeTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {

  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void RobotomyRequestFormNormalTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  Form* rrf;

  try {
    Intern someRandomIntern;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat b("someone", 40);
    std::cout << b << std::endl;
    std::cout << *rrf << std::endl;
    b.signForm(*rrf);
    b.executeForm(*rrf);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  delete rrf;

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void RobotomyRequestFormNotSignedTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  Form* rrf;

  try {
    Intern someRandomIntern;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat b("someone", 40);
    std::cout << b << std::endl;
    std::cout << *rrf << std::endl;
    b.executeForm(*rrf);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  delete rrf;

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void RobotomyRequestFormLessExecGradeTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  Form* rrf;

  try {
    Intern someRandomIntern;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat b("someone", 46);
    std::cout << b << std::endl;
    std::cout << *rrf << std::endl;
    b.signForm(*rrf);
    b.executeForm(*rrf);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  delete rrf;

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void RobotomyRequestFormLessSignGradeTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  Form* rrf;

  try {
    Intern someRandomIntern;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat b("someone", 73);
    std::cout << b << std::endl;
    std::cout << *rrf << std::endl;
    b.signForm(*rrf);
    b.executeForm(*rrf);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  delete rrf;

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}


void PresidentialPardonFormNormalTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {

  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void PresidentialPardonFormNotSignedTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {

  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void PresidentialPardonFormLessExecGradeTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {

  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void PresidentialPardonFormLessSignGradeTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {

  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        return 1;
    }
    if (strcmp(argv[1], "-ShrubberyCreationForm") == 0) {
        ShrubberyCreationFormNormalTest();
        ShrubberyCreationFormNotSignedTest();
        ShrubberyCreationFormLessExecGradeTest();
        ShrubberyCreationFormLessSignGradeTest();
    } else if (strcmp(argv[1], "-RobotomyRequestForm") == 0) {
        RobotomyRequestFormNormalTest();
        RobotomyRequestFormNotSignedTest();
        RobotomyRequestFormLessExecGradeTest();
        RobotomyRequestFormLessSignGradeTest();
    } else if (strcmp(argv[1], "-PresidentialPardonForm") == 0) {
        PresidentialPardonFormNormalTest();
        PresidentialPardonFormNotSignedTest();
        PresidentialPardonFormLessExecGradeTest();
        PresidentialPardonFormLessSignGradeTest();
    }
    return 0;
}
