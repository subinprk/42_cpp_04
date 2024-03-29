/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:30:44 by siun              #+#    #+#             */
/*   Updated: 2024/03/29 16:54:12 by subpark          ###   ########.fr       */
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
    for (int i = 0; i ++; i < 100)
        ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(Brain &copy)
{
    //?
}

Brain::~Brain()
{
    std::cout << "Default Deconstructor called\n";
}
