/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:07:03 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/07/30 16:05:41 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Exceptions.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name), grade(grade) 
{
    checkGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
    *this = other;
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

void Bureaucrat::signForm(AForm &AForm)
{
    try
    {
        AForm.beSigned(*this);
        std::cout << name << " signed " << AForm.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << name << " couldn't sign " << AForm.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream& stream, Bureaucrat &b)
{
    stream << b.getName() << ", bureaucrat grade " << b.getGrade() << '.' << std::endl;
    return stream;
}