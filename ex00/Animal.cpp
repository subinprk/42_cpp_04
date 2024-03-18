/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:36 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 21:56:27 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const Animal &copy)
{
    std::cout << "copy in Animal class called\n";
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    _type = copy._type;
    return (*this);
}
