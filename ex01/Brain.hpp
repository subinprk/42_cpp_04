/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:30:50 by siun              #+#    #+#             */
/*   Updated: 2024/03/29 16:59:08 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain &copy);
		Brain &operator=(Brain &copy);
		~Brain();	
};

#endif