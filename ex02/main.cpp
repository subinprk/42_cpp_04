/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:09 by subpark           #+#    #+#             */
/*   Updated: 2024/04/03 16:22:21 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
int main()
{
	const Dog *j = new Dog();
	const Cat *i = new Cat();
	//const Animal anim= Animal();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	std::cout << std::endl;
	delete i;
	delete j;

	std::cout << "--------------------------\n";

	Cat basic;
	Cat tmp = basic;

	Cat tmp1(basic);

	std::cout << "--------------------------\n";
}