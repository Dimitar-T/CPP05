/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:07:03 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/07/24 17:27:00 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"
#include "Exceptions.hpp"
#include "Form.hpp"

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

int Bureucrat::getGrade() const
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

void Bureucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream& stream, Bureucrat &b)
{
    stream << b.getName() << ", bureaucrat grade " << b.getGrade() << '.' << std::endl;
    return stream;
}