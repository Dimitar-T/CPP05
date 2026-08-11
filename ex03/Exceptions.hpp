/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:02:51 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/08/11 13:19:55 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

class GradeTooHighException : public std::exception
{
    public:
        const char* what() const noexcept override {
          return("Grade is too high");
    }
};

class GradeTooLowException : public std::exception
{
    public:
        const char* what() const noexcept override {
          return("Grade is too Low");
    }
};

class FormNotSignedException : public std::exception
{
    public:
        const char* what() const noexcept override {
          return("Form is not signed");
    }
};

class FormDoesNotExistException : public std::exception
{
    public:
        const char* what() const noexcept override {
          return("Form does not exist");
    }
};
#endif