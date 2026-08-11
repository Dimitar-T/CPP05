/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:56:35 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/08/11 12:16:23 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
: AForm(other), target(other.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::executeForm(Bureaucrat const &executor) const
{
	std::ofstream file(target + "_shrubbery");
	if (!file)
		throw std::runtime_error("Unable to open shrubbery file");

	file << "      _--_-_\n";
	file << "    |~~     ~~\\\n";
	file << " |~~         ~~\\\n";
	file << "|               |\n";
	file << " |  _-     -_  /\n";
	file << "   ~  \\ //   \n";
	file << "       | |   \n";
	file << "       | |   \n";
	file << "       | |   \n";
	file << std::endl;
}
