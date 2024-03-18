/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:43 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 21:56:03 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal{
    private:

    protected:
        std::string _type;
    public:
        Animal() = default;
        Animal(const Animal &copy);
        ~Animal() = default;
        Animal &operator = (const Animal &copy);
        virtual void makeSound();
};

#endif