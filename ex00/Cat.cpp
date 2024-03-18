/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:21 by subpark           #+#    #+#             */
/*   Updated: 2024/03/19 00:48:24 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor called\n";
}

Cat::Cat(const Cat &copy):Animal(copy)
{
	//std::cout << "Cat copy constructer\n";
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
	std::cout << "Default destructor called\n";
}

void Cat::makeSound()
{
	std::cout << "Cat: meow\n";
}