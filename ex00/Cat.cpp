/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:21 by subpark           #+#    #+#             */
/*   Updated: 2024/03/23 21:39:51 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called\n";
	this->_type = "cat";
}

Cat::Cat(const Cat &copy):Animal(copy)
{
	std::cout << "Cat copy constructer\n";
	this->_type = "cat";
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Assignment operator of Cat class is called\n";
	Animal::operator=(copy);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Cat: meow\n";
}