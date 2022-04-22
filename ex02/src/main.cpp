#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

void ShrubberyCreationFormNormalTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
    ShrubberyCreationForm s;
    Bureaucrat a("hoge", 3);
    std::cout << s << std::endl;
    std::cout << a << std::endl;
    a.signForm(s);
    a.executeForm(s);
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
    ShrubberyCreationForm s;
    Bureaucrat a("hoge", 3);
    std::cout << s << std::endl;
    std::cout << a << std::endl;
    a.executeForm(s);
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
    ShrubberyCreationForm s;
    Bureaucrat a("hoge", 138);
    std::cout << s << std::endl;
    std::cout << a << std::endl;
    a.signForm(s);
    a.executeForm(s);
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
    ShrubberyCreationForm s;
    Bureaucrat a("hoge", 146);
    std::cout << s << std::endl;
    std::cout << a << std::endl;
    a.signForm(s);
    a.executeForm(s);
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

  try {
    RobotomyRequestForm r;
    Bureaucrat a("hoge", 3);
    std::cout << r << std::endl;
    std::cout << a << std::endl;
    a.signForm(r);
    a.executeForm(r);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void RobotomyRequestFormNotSignedTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
    RobotomyRequestForm r;
    Bureaucrat a("hoge", 3);
    std::cout << r << std::endl;
    std::cout << a << std::endl;
    a.executeForm(r);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void RobotomyRequestFormLessExecGradeTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
    RobotomyRequestForm r;
    Bureaucrat a("hoge", 138);
    std::cout << r << std::endl;
    std::cout << a << std::endl;
    a.signForm(r);
    a.executeForm(r);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void RobotomyRequestFormLessSignGradeTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
    RobotomyRequestForm r;
    Bureaucrat a("hoge", 146);
    std::cout << r << std::endl;
    std::cout << a << std::endl;
    a.signForm(r);
    a.executeForm(r);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}


void PresidentialPardonFormNormalTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
    PresidentialPardonForm r;
    Bureaucrat a("hoge", 3);
    std::cout << r << std::endl;
    std::cout << a << std::endl;
    a.signForm(r);
    a.executeForm(r);
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
    PresidentialPardonForm r;
    Bureaucrat a("hoge", 3);
    std::cout << r << std::endl;
    std::cout << a << std::endl;
    a.executeForm(r);
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
    PresidentialPardonForm r;
    Bureaucrat a("hoge", 138);
    std::cout << r << std::endl;
    std::cout << a << std::endl;
    a.signForm(r);
    a.executeForm(r);
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
    PresidentialPardonForm r;
    Bureaucrat a("hoge", 146);
    std::cout << r << std::endl;
    std::cout << a << std::endl;
    a.signForm(r);
    a.executeForm(r);
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
