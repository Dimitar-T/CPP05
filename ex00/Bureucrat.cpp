/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:07:03 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/03/27 18:05:53 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"
#include "Exceptions.hpp"

Bureucrat::Bureucrat(std::string const name, int grade): name(name), grade(grade) 
{
    checkGrade(grade);
}

Bureucrat::Bureucrat(Bureucrat const &other)
{
    *this = other;
    std::cout << "A Bureucrat has been created via the copy constructor." << std::endl;
}

Bureucrat &Bureucrat::operator=(const Bureucrat &other)
{
    if (this != &other)
        grade = other.grade;
    return *this;
}

Bureucrat::~Bureucrat()
{
    std::cout << "Bureucrat " << name << " has been destroyed" << std::endl;
}

void Bureucrat::checkGrade(int grade)
{
    if (grade <= 0)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

int Bureucrat::getGrade()
{
    return (grade);
}

const std::string  Bureucrat::getName() const
{
    return (name);
}

void Bureucrat::decrementGrade()
{
    checkGrade(grade + 1);
    grade++;
}

void Bureucrat::incrementGrade()
{
    checkGrade(grade - 1);
    grade--;
}

std::ostream &operator<<(std::ostream& stream, Bureucrat &b)
{
    stream << b.getName() << ", bureaucrat grade " << b.getGrade() << '.' << std::endl;
    return stream;
}