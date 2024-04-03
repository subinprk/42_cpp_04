/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:30:44 by siun              #+#    #+#             */
/*   Updated: 2024/04/03 14:16:11 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called\n";
}

Brain::Brain(Brain &copy)
{
    std::cout << "Copy Constructor called\n";
    for (int i = 0; i < 100; i ++)
        ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(Brain &copy)
{
    std::cout << "Assignment operator of Brain\n";
    if (this != &copy)
        for(int i = 0; i < 100; i ++)
            this->ideas[i] = copy.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Default Destructor called\n";
}
