/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:49:12 by subpark           #+#    #+#             */
/*   Updated: 2024/04/03 10:26:03 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMALL_HPP
#include "string"
#include "iostream"

class WrongAnimal{
    private:

    protected:
        std::string _type;
    public:
        WrongAnimal();
    //    WrongAnimal(const std::string type);
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &copy);
        void    makeSound() const;
        std::string getType() const;
};

#endif