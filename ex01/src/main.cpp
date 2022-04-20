#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

void normalTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
    Form f("hoge form", 10, 10);
    Bureaucrat a("hoge", 3);
    a.signForm(f);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void exceptionTest(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
    Form f("hoge form", 10, 10);
    Bureaucrat a("hoge", 11);
    a.signForm(f);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

int main(void) {
  normalTest();
  exceptionTest();
  return 0;
}
