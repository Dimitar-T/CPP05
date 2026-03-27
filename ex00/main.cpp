/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:33:00 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/03/27 18:05:10 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

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
    
    
    
    
}