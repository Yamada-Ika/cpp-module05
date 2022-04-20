#include "Bureaucrat.hpp"
#include <iostream>

void exceptionTest1(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
     Bureaucrat a("hoge", -1);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void exceptionTest2(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
     Bureaucrat a("hoge", 151);
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void exceptionTest3(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
     Bureaucrat a("hoge", 2);
     std::cout << a << std::endl;
     a.increGrade();
     a.increGrade();
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

void exceptionTest4(void) {
  std::cout << "--- " << __func__ << " start! ---" << std::endl;
  std::cout << std::endl;

  try {
     Bureaucrat a("hoge", 149);
     std::cout << a << std::endl;
     a.decreGrade();
     a.decreGrade();
  }
  catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << "--- " << __func__ << " end! ---" << std::endl;
}

int main(void) {
  exceptionTest1();
  exceptionTest2();
  exceptionTest3();
  exceptionTest4();
  return 0;
}
