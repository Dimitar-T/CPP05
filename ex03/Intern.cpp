/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 12:35:42 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/08/11 13:31:19 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

Intern::~Intern()
{
}

typedef AForm* (*FormCreator)(const std::string&);

AForm* createShrubbery(const std::string& target);
AForm* createRobotomy(const std::string& target);
AForm* createPardon(const std::string& target);


FormCreator creators[3] = {
    createShrubbery,
    createRobotomy,
    createPardon
};

AForm* createShrubbery(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* createRobotomy(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

AForm* createPardon(const std::string& target)
{
    return new PresidentialPardonForm(target);
}


AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
   std::array<std::string, 3> names = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
	
    for (int i = 0; i < names.size(); i++)
    {
        if (formName == names[i])
		{
			std::cout << "Intern created " << formName << std::endl;
			return creators[i](target);
		}
    }
	std::cout << "Intern cannot create form: \"" << formName << "\", cus it doesn't exist"<< std::endl;
    return NULL;
}


