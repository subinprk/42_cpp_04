/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:49:12 by subpark           #+#    #+#             */
/*   Updated: 2024/04/27 21:30:29 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "string"
#include "iostream"

class WrongAnimal{
    public:
        WrongAnimal();
    //    WrongAnimal(const std::string type);
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &copy);
        void    makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

#endif