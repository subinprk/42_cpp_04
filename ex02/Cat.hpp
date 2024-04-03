/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:26 by subpark           #+#    #+#             */
/*   Updated: 2024/04/03 16:20:10 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat();
       virtual void makeSound() const;
};

#endif