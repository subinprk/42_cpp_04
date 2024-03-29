/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:42:53 by subpark           #+#    #+#             */
/*   Updated: 2024/03/29 17:47:35 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy):WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructer\n";
	this->_type = "WrongCat";
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Assignment operator of WrongCat class is called\n";
	WrongAnimal::operator=(copy);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: meow\n";
}