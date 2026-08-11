/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:33:00 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/08/11 15:09:42 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
    // Bureaucrat a("Iliq", 150);
    // std::cout << a;
    // try
    // {
    //      a.decrementGrade();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // try
    // {
    //     Bureaucrat b("ls", 0);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() <<  std::endl;
    // }
    // try
    // {
    //    Bureaucrat b("ls", 150);
    //    b.decrementGrade();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() <<  std::endl;
    // }
    // try
    // {
    //     a.incrementGrade();
    //     std::cout << "Bureaucrat: " << a.getName() << " - Grade: " << a.getGrade() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     a.decrementGrade();
    //     std::cout << "Bureaucrat: " << a.getName() << " - Grade: " << a.getGrade() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    ////---------Form test---------////
    // try
    // {
    //     Bureaucrat alice("Alice", 1);
    //     AForm paperwork("N.W.A application", 5, 5);
    //     alice.signForm(paperwork);
    //     std::cout << "Paperwork signed status: " << paperwork.getIsSigned() << std::endl;

    //     Bureaucrat bob("Bob", 10);
    //     AForm strict("PIMP application", 5, 5);
    //     bob.signForm(strict);

    //     Bureaucrat carol("Carol", 5);
    //     AForm boundary("Boundary application", 5, 5);
    //     carol.signForm(boundary);
    //     std::cout << "Boundary signed status: " << boundary.getIsSigned() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    
    // try
    // {
    //     AForm invalid("fake application", -1, 1);
    //     AForm invalid2("same as above", 151, 1);
    //     AForm invalid3("bad execute grade", 1, 151);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // ShrubberyCreationForm test
    std::cout  << "\n\033[31m----- ShrubberyCreationForm Test -----\033[0m\n"  << std::endl;
    try
    {
        Bureaucrat alice("Alice", 111);
        ShrubberyCreationForm form("home");
        alice.signForm(form);
        form.execute(alice);
        std::cout << "ShrubberyCreationForm executed, file 'home_shrubbery' should be created." << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Shrubbery test failed: " << e.what() << std::endl;
    }

    // RobotomyRequestForm  (20 trials)
    std::cout  << "\n\033[31m----- RobotomyRequestForm Test -----\033[0m\n" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 45);
        for (int i = 0; i < 20; ++i)
        {
            std::cout << "Trial " << (i + 1) << ": ";
            RobotomyRequestForm form("Marvin");
            bob.signForm(form);
            form.execute(bob);
            std::cout << std::endl;
        }
    }
    catch(const std::exception &e)
    {
        std::cerr << "Robotomy loop test failed: " << e.what() << std::endl;
    }

    // PresidentialPardonForm test
    std::cout  << "\n\033[31m----- PresidentialPardonForm Test -----\033[0m\n" << std::endl;
    try
    {
        Bureaucrat sarah("Sarah", 5);
        PresidentialPardonForm pardon("Arthur Dent");
        sarah.signForm(pardon);
        pardon.execute(sarah);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Pardon test failed: " << e.what() << std::endl;
    }
    // Additional tests for edge cases
    std::cout  << "\n\033[31m----- Throw Case Tests -----\033[0m\n" << std::endl;
    try
    {
        Bureaucrat charlie("Charlie", 150);
        ShrubberyCreationForm form("garden");
        charlie.signForm(form); 
        form.execute(charlie);   
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat dave("Dave", 46);
        RobotomyRequestForm form("Marvin");
        dave.signForm(form); 
        form.execute(dave);   
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl;

    try
    {
        Bureaucrat eve("Eve", 6);
        PresidentialPardonForm form("Arthur Dent");
        eve.signForm(form); 
        form.execute(eve);   
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat frank("Frank", 1);
        RobotomyRequestForm form("Marvin");
        form.execute(frank);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}