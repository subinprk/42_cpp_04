/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:30:50 by siun              #+#    #+#             */
/*   Updated: 2024/04/27 20:48:47 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain{
	public:
		Brain();
		Brain(Brain &copy);
		Brain &operator=(Brain &copy);
		~Brain();
	private:
		std::string ideas[100];
};

#endif