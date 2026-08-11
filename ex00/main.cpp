/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:33:00 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/08/04 15:11:40 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat a("Iliq", 150);
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
        Bureaucrat b("ls", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<  std::endl;
    }
    try
    {
       Bureaucrat b("ls", 150);
       b.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<  std::endl;
    }
    try
    {
        a.incrementGrade();
        std::cout << "Bureaucrat: " << a.getName() << " - Grade: " << a.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        a.decrementGrade();
        std::cout << "Bureaucrat: " << a.getName() << " - Grade: " << a.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}