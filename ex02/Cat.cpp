/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:21 by subpark           #+#    #+#             */
/*   Updated: 2024/04/03 14:19:06 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_brain = new Brain();
	std::cout << "Default Cat constructor called\n";
	this->_type = "cat";
}

Cat::Cat(const Cat &copy):Animal(copy)
{
	_brain = new Brain(*copy._brain);
	std::cout << "Cat copy constructer\n";
	this->_type = "cat";
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Assignment operator of Cat class is called\n";
	if (this != &copy) {
		Animal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete(_brain);
	std::cout << "Default Cat destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Cat: meow\n";
}