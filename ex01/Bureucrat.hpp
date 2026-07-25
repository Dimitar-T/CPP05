/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:06:55 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/07/24 17:24:30 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

class Form;

class Bureucrat
{
private:
    const std::string  name;
    int grade;
public:
    //------------constructors and destructors---------//
    Bureucrat(std::string const name, int grade);
    Bureucrat(Bureucrat const &other);
    Bureucrat &operator=(Bureucrat const &other);
    ~Bureucrat();
    //----------get---------//
    std::string const getName() const;
    int getGrade() const;
    //----------methods---------//
    void checkGrade(int grade);
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);

};
///----------overload---------//
std::ostream& operator<<(std::ostream& stream, Bureucrat &b);

#endif
