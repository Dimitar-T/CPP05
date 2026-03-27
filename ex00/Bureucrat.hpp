/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:06:55 by dtrendaf          #+#    #+#             */
/*   Updated: 2026/03/27 18:01:13 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP



class Bureucrat
{
private:
    std::string const name;
    int grade;
public:
    Bureucrat(std::string const name, int grade);
    Bureucrat(Bureucrat const &other);
    Bureucrat &operator=(Bureucrat const &other);
    ~Bureucrat();
    std::string const getName() const;
    int getGrade();
    void checkGrade(int grade);
    void incrementGrade();
    void decrementGrade();

};

std::ostream& operator<<(std::ostream& stream, Bureucrat &b);

#endif
