/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:06 by subpark           #+#    #+#             */
/*   Updated: 2024/04/03 14:17:23 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called\n";
	_brain = new Brain();
	this->_type = "dog";
}

Dog::Dog(const Dog &copy):Animal(copy)
{
	_brain = new Brain(*copy._brain);
	std::cout << "Dog copy constructer\n";
	this->_type = "dog";
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		std::cout << "Assignment operator of Dog class is called\n";
		Animal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete(_brain);
	std::cout << "Default Dog destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Dog: woof, woof \n";
}