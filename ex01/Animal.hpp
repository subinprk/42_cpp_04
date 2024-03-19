/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:43 by subpark           #+#    #+#             */
/*   Updated: 2024/03/19 02:21:33 by siun             ###   ########.fr       */
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
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal &operator = (const Animal &copy);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif