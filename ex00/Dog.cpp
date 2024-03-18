/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:06 by subpark           #+#    #+#             */
/*   Updated: 2024/03/19 00:50:09 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor called\n";
}

Dog::Dog(const Dog &copy):Animal(copy)
{
	//std::cout << "Dog copy constructer\n";
	this->_type = "dog";
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Assignment operator of Dog class is called\n";
	Animal::operator=(copy);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Default destructor called\n";
}

void Dog::makeSound()
{
	std::cout << "Dog: woof, woof \n";
}