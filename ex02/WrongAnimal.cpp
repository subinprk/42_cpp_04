/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:49:06 by subpark           #+#    #+#             */
/*   Updated: 2024/03/29 15:05:09 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor called\n";
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "copy in WrongAnimal class called\n";
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default WrongAnimal Destructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    _type = copy._type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal making Sound\n";
}

std::string WrongAnimal::getType() const
{
    return (_type);
}
