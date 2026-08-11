/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:07:03 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/03/27 18:05:53 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Exceptions.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name), grade(grade) 
{
    checkGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
    *this = other;
    std::cout << "A Bureaucrat has been created via the copy constructor." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << name << " has been destroyed" << std::endl;
}

void Bureaucrat::checkGrade(int grade)
{
    if (grade <= 0)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

const std::string  Bureaucrat::getName() const
{
    return (name);
}

void Bureaucrat::decrementGrade()
{
    checkGrade(grade + 1);
    grade++;
}

void Bureaucrat::incrementGrade()
{
    checkGrade(grade - 1);
    grade--;
}

std::ostream &operator<<(std::ostream& stream, Bureaucrat &b)
{
    stream << b.getName() << ", bureaucrat grade " << b.getGrade() << '.' << std::endl;
    return stream;
}