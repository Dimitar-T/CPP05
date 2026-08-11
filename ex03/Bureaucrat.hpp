/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:06:55 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/07/30 16:05:41 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class AForm;

class Bureaucrat
{
private:
    const std::string  name;
    int grade;
public:
    //------------constructors and destructors---------//
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &other);
    Bureaucrat &operator=(Bureaucrat const &other);
    ~Bureaucrat();
    //----------get---------//
    std::string const getName() const;
    int getGrade() const;
    //----------methods---------//
    void checkGrade(int grade);
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &AForm);

};
///----------overload---------//
std::ostream& operator<<(std::ostream& stream, Bureaucrat &b);

#endif
