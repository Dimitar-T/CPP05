# CPP05

Part of the 42 C++ curriculum.

The module focuses on exceptions and try/catch, while building on inheritance and polymorphism.

ex00 — Bureaucrat

Bureaucrat with grade validation and custom exceptions for invalid grades.

ex01 — Form

Introduces Form and exception handling for:

Invalid form grades
Signing permissions
try / catch

ex02 — AForm & Concrete Forms

Introduces abstract forms and polymorphic execution.

     AForm::execute()
     │
     ├── check signed
     ├── check grade
     │
     └── executeForm()
          │
          ┌──────────────┼──────────────┐
          ↓              ↓              ↓
     Shrubbery       Robotomy      Presidential
          action          action          action

ex03 — Intern

An Intern creates forms based on their name using function pointers.

                    creators[index](target)
                               │
                  ┌────────────┼────────────┐
                  |            |            |
          createShrubbery  createRobotomy  createPardon
		     0			 1               2
