/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:33:00 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/07/25 17:19:21 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"
#include "Form.hpp"

int main ()
{
    Bureucrat a("Iliq", 150);
    std::cout << a;
    try
    {
         a.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureucrat b("ls", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<  std::endl;
    }
    try
    {
       Bureucrat b("ls", 150);
       b.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<  std::endl;
    }
    try
    {
        a.incrementGrade();
        std::cout << "Bureucrat: " << a.getName() << " - Grade: " << a.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        a.decrementGrade();
        std::cout << "Bureucrat: " << a.getName() << " - Grade: " << a.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    ////---------form test---------////
    try
    {
        Bureucrat alice("Alice", 1);
        Form paperwork("N.W.A application", 5, 5);
        alice.signForm(paperwork);
        std::cout << "Paperwork signed status: " << paperwork.getIsSigned() << std::endl;

        Bureucrat bob("Bob", 10);
        Form strict("PIMP application", 5, 5);
        bob.signForm(strict);

        Bureucrat carol("Carol", 5);
        Form boundary("Boundary application", 5, 5);
        carol.signForm(boundary);
        std::cout << "Boundary signed status: " << boundary.getIsSigned() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        Form invalid("fake application", -1, 1);
        Form invalid2("same as above", 151, 1);
        Form invalid3("bad execute grade", 1, 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}