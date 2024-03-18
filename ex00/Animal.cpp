/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:36 by subpark           #+#    #+#             */
/*   Updated: 2024/03/19 00:47:18 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor called\n";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "copy in Animal class called\n";
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Default Destuructor called\n";
}

Animal &Animal::operator=(const Animal &copy)
{
    _type = copy._type;
    return (*this);
}

std::string Animal::getType()
{
    return (_type);
}