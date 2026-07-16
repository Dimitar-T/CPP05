/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:06:55 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/07/16 15:06:20 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP



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
    int getGrade();
    //----------methods---------//
    void checkGrade(int grade);
    void incrementGrade();
    void decrementGrade();

};
///----------overload---------//
std::ostream& operator<<(std::ostream& stream, Bureucrat &b);

#endif
