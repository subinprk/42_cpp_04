/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:42:53 by subpark           #+#    #+#             */
/*   Updated: 2024/04/27 20:59:59 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_brain = new Brain();
	std::cout << "Default WrongCat constructor called\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy):WrongAnimal(copy)
{
	_brain = new Brain(*copy._brain);
	std::cout << "WrongCat copy constructer\n";
	this->_type = "WrongCat";
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Assignment operator of WrongCat class is called\n";
	if (this != &copy) {
		WrongAnimal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	delete(_brain);
	std::cout << "Default WrongWrongCat destructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: meow\n";
}