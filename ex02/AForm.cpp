/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:15:09 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/08/11 11:40:17 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Exceptions.hpp"

void checkGrade(int grade)
{
		if (grade <= 0)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute): name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	checkGrade(gradeToSign);
	checkGrade(gradeToExecute);
}

AForm::AForm(const AForm &other): name(other.getName()), isSigned(other.getIsSigned()), gradeToSign(other.getGradeToSign()), gradeToExecute(other.getGradeToExecute())
{
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		isSigned = other.getIsSigned();
	return *this;
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

int AForm::getGradeToSign() const
{
	return gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}
void AForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > gradeToExecute)
		throw GradeTooLowException();
	executeAction(executor);
}


