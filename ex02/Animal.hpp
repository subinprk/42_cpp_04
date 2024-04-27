/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:43 by subpark           #+#    #+#             */
/*   Updated: 2024/04/27 21:31:08 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal{
    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal &operator = (const Animal &copy);
        virtual void makeSound() const = 0;
        std::string getType() const;
    protected:
        std::string _type;
};

#endif