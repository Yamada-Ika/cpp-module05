#include <string>
#include "Form.hpp"

class Intern {
    static const int form_num = 3;

 private:
    Form *newShrubberyForm(const std::string target);
    Form *newPresidentialForm(const std::string target);
    Form *newRobotomyForm(const std::string target);

 public:
    Intern(void);
    ~Intern(void);
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);

    Form *makeForm(const std::string form_name, const std::string target);

    class NoSuchFormException : public std::exception {
        virtual const char* what() const throw();
    };
};
