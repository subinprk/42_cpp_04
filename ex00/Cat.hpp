/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:26 by subpark           #+#    #+#             */
/*   Updated: 2024/03/18 21:59:44 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat() = default;
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat() = default;
};

#endif