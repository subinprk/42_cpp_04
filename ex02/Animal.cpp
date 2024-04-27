/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:36 by subpark           #+#    #+#             */
/*   Updated: 2024/04/27 21:04:49 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor called\n";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "copy in Animal class called\n";
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Default Animal Destuructor called\n";
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Assignment operator of Animal\n";
    _type = copy._type;
    return (*this);
}

std::string Animal::getType() const
{
    return (_type);
}

// void Animal::makeSound()const {
//     std::cout << "Animal Sound\n";
// }